/* Write a Java program that compares between three input string names by displaying the 
longest string. */
import java.util.Scanner;
public class Task3 {
    public static void main(String[] args) throws Exception {
        Scanner input = new Scanner(System.in);
        String max = "";
        System.out.println("Input 3 names: ");
        String s1 = input.nextLine();
        String s2 = input.nextLine();
        String s3 = input.nextLine();
        if (max.length() < s1.length())
        {
            max = s1;
        }
        if (max.length() < s2.length())
        {
            max = s2;
        }
        if (max.length() < s3.length())
        {
            max = s3;
        }

        System.out.println("Max string is: " + max);
        input.close();
    }
}
