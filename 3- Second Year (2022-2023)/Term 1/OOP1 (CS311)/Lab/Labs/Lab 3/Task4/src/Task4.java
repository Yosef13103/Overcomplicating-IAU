/* Write a Java program to count Words in a String – Counts the number of individual 
words in a string */
import java.util.Scanner;
public class Task4 {
    public static void main(String[] args) throws Exception 
    {   
        System.out.println("Input a sentence to count words in the string: ");
        Scanner input = new Scanner(System.in);
        String s = input.nextLine();
        System.out.println("Number of words in the string: " + countWords(s.trim()));
        input.close();
    }

    public static int countWords(String s)
    {
        int count = 1;
        for(int i = 0; i < s.length(); i++)
        {
            if(s.charAt(i) == ' ')
            {
                count++;
            }
        }
        return count;
    }
}

