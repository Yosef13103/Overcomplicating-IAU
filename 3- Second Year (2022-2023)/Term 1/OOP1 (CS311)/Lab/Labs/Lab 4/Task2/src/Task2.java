/* 
Write a Java method to check whether a string is a valid password.
Password rules:
– A password must have at least ten characters.
– A password consists of only letters and digits.
– A password must contain at least two digits.
 */
import java.util.Scanner;
public class Task2 {
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        System.out.println("1. A password must have at least eight characters");
        System.out.println("2. A password consists of only letters and digits.");
        System.out.println("3. A password must contain at least two digits");

        System.out.println("Input a password: ");
        String password = input.next();
        if(checkPassword(password))
        {
            System.out.println("Password is valid: " + password);
        }
        else
        {
            System.out.println("Password is not valid");
        }
        input.close();
    }

    static boolean checkPassword(String pass)
    {
        int count = 0;
        pass = pass.toLowerCase(); //making everything lowercase
        if((pass.length() < 8)) //at least 8 characters
        {
            return false;
        }
        for (int i = 0; i < pass.length(); i++) //loop through each character
            {
                if(!(Character.isLetter(pass.charAt(i)) || Character.isDigit(pass.charAt(i)))) //must be alphabetical
                {
                    return false;
                }
                if(Character.isDigit(pass.charAt(i))) //at least 2 digits
                {
                    count++;
                }
            }
        if (count >= 2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }


}
