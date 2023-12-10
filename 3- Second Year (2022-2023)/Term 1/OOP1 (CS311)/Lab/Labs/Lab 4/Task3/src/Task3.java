/*Write a java method deleteChar(), which deletes any occurrence in the first argument 
“str1” of the single character which is the second argument “c”.
Assume the method signature is: void deleteChar(String str1, char c) */
import java.util.Scanner;
public class Task3 {
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        System.out.println("Type in a string: ");
        String string = input.nextLine();
        System.out.println("Enter a letter to delete: ");
        char delete = input.next().charAt(0);

        deleteChar(string, delete);
        input.close();
    }

    static void deleteChar(String str1, char str2)
    {
        String newString = "";
        for(int i = 0; i < str1.length(); i++)
        {
            if(str1.charAt(i) != str2)
            {
                newString += str1.charAt(i);
            }
        }
        System.out.println("New string after removing " + str2 + " is " + newString);
    }
}

