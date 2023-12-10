/*Write a program that prompts the user to enter the number of students and each 
student’s name and score, and finally displays the student with the highest score. */
import java.util.Scanner;
public class Task1 
{
    public static void main(String[] args) throws Exception 
    {
        Scanner input = new Scanner(System.in);
        String maxName = "";
        int maxScore = 0;
        for (int i = 0; i < 3; i++) 
        {
            System.out.println("Enter name and score of student (" + (i+1) + ")");
            String name = input.next();
            int score = input.nextInt();
            if (score > maxScore)
            {
                maxScore = score;
                maxName = name;
            }
        }
    System.out.println("The student with the highest score is " + maxName);
    input.close();
    }   
}

