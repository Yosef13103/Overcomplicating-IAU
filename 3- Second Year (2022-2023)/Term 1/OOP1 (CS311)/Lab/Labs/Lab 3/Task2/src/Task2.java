/*Design and implement a Java program that generates a password for a student using 
his name and age as the following:
– Take the first letter from the first name, the middle letter from the 
middle name and the last letter from the last name.
– Then concatenate the obtained letters along with age which should be 
multiplied by 100.
– All letters should be in uppercase 
 */

import java.util.Scanner;
public class Task2 {
    public static void main(String[] args) throws Exception {
        String password = "";
        Scanner input = new Scanner(System.in);
        System.out.println("First Name: ");
        String firstName = input.next();
        System.out.println("Middle Name: ");
        String middleName = input.next();
        System.out.println("Last Name: ");
        String lastName = input.next();
        System.out.println("Age: ");
        int age = input.nextInt();
        password += firstName.charAt(0);
        password += middleName.charAt(middleName.length()/2);
        password += lastName.charAt(2);
        password += age*100;
        System.out.println("Your Password: " + password.toUpperCase());
        input.close();
    }
}
