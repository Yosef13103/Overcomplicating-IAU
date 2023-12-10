/* Design then implement a Java program that remove the 1st three occurrences of the 
character ‘m’ (capital or small) from string then print the resulting string on the screen. */
import java.util.Scanner;
import java.lang.Character ;
public class Task3 {
    public static void main(String[] args) throws Exception {
        Scanner input = new Scanner(System.in);
        String stringNew = "";

        System.out.println("Enter a string: ");
        String string = input.nextLine();
        for(int i = 0; i < string.length(); i++) 
        {
            if(Character.toUpperCase(string.charAt(i)) != 'M')
            {
                stringNew += string.charAt(i);
            }
        }

        System.out.println("Ther new string is: " + stringNew);
        input.close();
    }
}

