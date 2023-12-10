/*Create a GUI calculator with only sum and substraction connected to a mysql database
 * When user click on “+ “button and the word “sum” will inserted to “operation”
column and the word result will be saved to “result” column
- When user click on “-“button and the word “substraction” will inserted to “operation”
column and the word result will be saved to “result” column
- When user click on exit button the window will be close and you will disconnect the DB
*/

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
import java.sql.*;


public class App {
    public static void main(String[] args) throws Exception {
        gui();
    }

    //GUI
    public static void gui() throws Exception
    {
        JFrame frame = new JFrame("Calculator");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(1000, 200);
        frame.setLayout(new FlowLayout());

        JTextField firstNumber = new JTextField();
        firstNumber.setPreferredSize(new Dimension(200, 20));
        JTextField secondNumber = new JTextField();
        secondNumber.setPreferredSize(new Dimension(200, 20));
        JTextField result = new JTextField();
        result.setPreferredSize(new Dimension(200, 20));

        JTextField operation = new JTextField();
        operation.setText(" ? ");
        operation.setAlignmentY(JTextField.CENTER_ALIGNMENT);
        operation.setEditable(false);
        operation.setBorder(null);

        JTextField equalText = new JTextField();
        equalText.setText(" = ");
        equalText.setAlignmentX(JTextField.CENTER_ALIGNMENT);
        equalText.setEditable(false);
        equalText.setBorder(null);

        JButton sumButton = new JButton("+");
        sumButton.setMinimumSize(new Dimension(50, 50));
        sumButton.setMaximumSize(new Dimension(50, 50));
        JButton subtractionButton = new JButton("-");
        JButton clearButton = new JButton("Clear");
        JButton exitButton = new JButton("Exit");

        frame.add(firstNumber);
        frame.add(operation);
        frame.add(secondNumber);
        frame.add(equalText);
        frame.add(result);
        frame.add(sumButton);
        frame.add(subtractionButton);
        frame.add(clearButton);
        frame.add(exitButton);
        frame.setVisible(true);


        //Handlers
        sumButton.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                try {
                    double firstNumberValue = Double.parseDouble(firstNumber.getText());
                    double secondNumberValue = Double.parseDouble(secondNumber.getText());
                    double resultValue = firstNumberValue + secondNumberValue;
                    result.setText(String.valueOf(resultValue));
                    database("Sum", resultValue);
                    System.err.println("Summation: " + firstNumberValue + " + " + secondNumberValue + " = " + resultValue);
                }
                catch (NumberFormatException e1) {
                    System.err.println("Summation - Invalid Number");
                    JOptionPane.showMessageDialog(null, "Please enter a valid number", "Error", JOptionPane.ERROR_MESSAGE);
                }
                catch (Exception e1) {
                    System.err.println("Failed to sum " + e1.getMessage());
                    JOptionPane.showMessageDialog(null, "Failed to subtract", "Error", JOptionPane.ERROR_MESSAGE);
                    e1.printStackTrace();
                }
            }
        });

        subtractionButton.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                try {
                    double firstNumberValue = Double.parseDouble(firstNumber.getText());
                    double secondNumberValue = Double.parseDouble(secondNumber.getText());
                    double resultValue = firstNumberValue - secondNumberValue;
                    result.setText(String.valueOf(resultValue));
                    database("Subtraction", resultValue);
                    System.err.println("Subtraction: " + firstNumberValue + " - " + secondNumberValue + " = " + resultValue);
                }
                catch (NumberFormatException e1) {
                    System.err.println("Subtraction - Invalid Number");
                    JOptionPane.showMessageDialog(null, "Please enter a valid number", "Error", JOptionPane.ERROR_MESSAGE);
                }
                catch (Exception e1) {
                    System.err.println("Failed to subtract " + e1.getMessage());
                    JOptionPane.showMessageDialog(null, "Failed to subtract", "Error", JOptionPane.ERROR_MESSAGE);
                    e1.printStackTrace();
                }
            }
        });

        clearButton.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                firstNumber.setText("");
                secondNumber.setText("");
                result.setText("");
            }
        });

        exitButton.addActionListener(new ActionListener()
        {
            public void actionPerformed(ActionEvent e)
            {
                System.err.println("Exiting...");
                System.exit(0);
            }
        });
    }

    //Database connection
    public static void database(String operation, double result) throws Exception
    {
        Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306", "root", "root");
        try (PreparedStatement stmt = con.prepareStatement("INSERT INTO calculation.operations (operation, result) VALUES (?, ?)");) 
        {
            stmt.setString(1, operation);
            stmt.setDouble(2, result);
            stmt.executeUpdate();
        }
        catch (Exception e) {
            System.err.println("Failed to insert data: " + e.getMessage());
        }
        finally {
            con.close();
            System.err.println("Operation: " + operation + "\nResult: " + result);
        }

    }
}
