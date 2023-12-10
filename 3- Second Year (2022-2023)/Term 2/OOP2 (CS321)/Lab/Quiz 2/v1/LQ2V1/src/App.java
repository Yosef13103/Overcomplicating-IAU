//create a gui connected to a database that has username and password and when you click login it will check if the username and password is correct or not

import java.awt.*;
import java.awt.event.*;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;

import javax.swing.*;

public class App{
    public static void main(String[] args) throws Exception {
        gui();
    }   

    //GUI Code
    public static void gui() throws Exception {
        JFrame frame = new JFrame("Login");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(300, 150);
        frame.setLayout(new FlowLayout());

        JLabel usernameLabel = new JLabel("Username:");
        JTextField username = new JTextField();
        username.setPreferredSize(new Dimension(200, 30));
        JLabel passwordLabel = new JLabel("Password:");
        JPasswordField password = new JPasswordField();
        password.setPreferredSize(new Dimension(200, 30));

        JButton loginButton = new JButton("Login");
        frame.add(usernameLabel);
        frame.add(username);
        frame.add(passwordLabel);
        frame.add(password);
        frame.add(loginButton);
        frame.setVisible(true);

        //Handler
        loginButton.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                System.out.println("Login button clicked");
                try {
                    connect(username.getText(), new String(password.getPassword()));
                } catch (Exception e1) {
                    e1.printStackTrace();
                }
            }
        });
    }

    // Database connectivity code
    public static void connect(String username, String password) throws Exception{
        Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/","root","root");
        try (PreparedStatement stmt = con.prepareStatement("SELECT * FROM user.users WHERE Username = ? && Password = ?");)
        {
            stmt.setString(1, username);
            stmt.setString(2, password);
            ResultSet rs = stmt.executeQuery();
            if(rs.next())
            {
                JOptionPane.showMessageDialog(null, "Login Successful");
            }
            else
            {
                JOptionPane.showMessageDialog(null, "Login Failed", "Error", JOptionPane.ERROR_MESSAGE);
            }
        }
        catch (Exception e) {
            System.err.println("Error: " + e.getMessage());
        }
        finally {
            con.close();
        }
    }
}
