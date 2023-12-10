// 2210009123 - Yosef Ahmed - Lab Quiz 2
import javax.swing.*;
import java.awt.*;
import java.sql.*;

public class LQ2_2210009123 {
    public static void main(String[] args) throws Exception {
        GUI();
    }

    //GUI implementation
    public static void GUI() throws Exception 
    {
        JFrame frame = new JFrame("Employee");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(700, 200);
        frame.setLayout(new FlowLayout());


        JLabel idLabel = new JLabel("Employee ID");
        JLabel nameLabel = new JLabel("Name");
        JLabel salaryLabel = new JLabel("Salary");

        JTextField idField = new JTextField(10);
        JTextField nameField = new JTextField(10);
        JTextField salaryField = new JTextField(10);

        JButton addButton = new JButton("Add");
        JButton updateButton = new JButton("Update");

        frame.add(idLabel);
        frame.add(idField);
        frame.add(nameLabel);
        frame.add(nameField);
        frame.add(salaryLabel);
        frame.add(salaryField);
        frame.add(addButton);
        frame.add(updateButton);

        frame.setVisible(true);


        // Handlers
        addButton.addActionListener(e -> {
            String id = idField.getText();
            String name = nameField.getText();
            String salary = salaryField.getText();
            if(addToDatabase(id, name, salary) == 1)
            {   
                JOptionPane.showMessageDialog(null, "Data inserted successfully", "Success", JOptionPane.INFORMATION_MESSAGE);
                idField.setText("");
                nameField.setText("");
                salaryField.setText("");                
            }
        });

        updateButton.addActionListener(e -> {
            String name = nameField.getText();
            if (name.equals("") == false)
            {
                String newSalary = JOptionPane.showInputDialog("Enter the increment salary");
                updateDatabase(name, newSalary);
            }
            else
            {
                JOptionPane.showMessageDialog(null, "Please enter a name whos salary is to be incremented", "Error", JOptionPane.ERROR_MESSAGE);
            }
        });
    }

    //Database Implementations
    public static int addToDatabase(String id, String name, String salary) 
    {  
        try (Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/","root","root")) {
            PreparedStatement stmt = con.prepareStatement("INSERT INTO Company.Employee VALUES (?, ?, ?)");
            try
            {
                stmt.setString(1, id);
                stmt.setString(2, name);
                stmt.setString(3, salary);
                stmt.executeUpdate();
            }
            catch (Exception e) 
            {
                System.err.println("Error inserting data into database: " + e.getMessage());
                JOptionPane.showMessageDialog(null, "Error inserting data into database: " + e.getMessage(), "Error", JOptionPane.ERROR_MESSAGE);
                return 0;
            }
            finally 
            {
                con.close();
            }
        } 
        catch (SQLException e) 
        {
            System.err.println("Error connecting to database: " + e.getMessage());
            JOptionPane.showMessageDialog(null, "Error connecting to database: " + e.getMessage(), "Error", JOptionPane.ERROR_MESSAGE);
            return 0;
        }
        return 1;
    }
    public static void updateDatabase(String name, String salary)
    {
        try
        {
            Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/","root","root");
            try 
            {
                Statement stmt = con.createStatement();
                String query = "UPDATE Company.Employee SET Salary = Salary + " + salary + " WHERE name = '" + name + "'";
                stmt.executeUpdate(query);
                JOptionPane.showMessageDialog(null, "Salary for users with the name '" + name + "' updated successfully", "Success", JOptionPane.INFORMATION_MESSAGE);
            } 
            catch (SQLSyntaxErrorException e)
            {
                System.err.println("Please only use integers for the salary: " + e.getMessage());
                JOptionPane.showMessageDialog(null, "Please only use integers", "Error", JOptionPane.ERROR_MESSAGE);
            }
            catch (Exception e) 
            {
                System.err.println("Error updating salary: " + e.getMessage());
                JOptionPane.showMessageDialog(null, "Error updating salary: " + e.getMessage(), "Error", JOptionPane.ERROR_MESSAGE);
            }
            finally
            {
                con.close();
            }
        }
        catch (SQLException e) 
        {
            System.err.println("Error connecting to database: " + e.getMessage());
            JOptionPane.showMessageDialog(null, "Error connecting to database: " + e.getMessage(), "Error", JOptionPane.ERROR_MESSAGE);
        }
    }
}
