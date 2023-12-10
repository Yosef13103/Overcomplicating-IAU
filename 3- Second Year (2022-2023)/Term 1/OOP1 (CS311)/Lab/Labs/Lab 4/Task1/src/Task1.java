/*Write a program that calculate and classify the rainfall average for 4 weeks.
- Firstly, read the rainfall rates for each day in the 4 weeks and store them in a 2-
dimentional array [4][7].
- Write a method getClassification() to get the classification. The method should receive 
the rainfall average for a week from the main, and print the classification for that week: 
High, Medium or Low; based on the received average 

Rainfall average Classification
average >= 6 High
6 > average > 3 Medium
average < = 3 Low
*/

import java.util.Scanner;
public class Task1 {

    public static void main(String[] args){
        Scanner input = new Scanner(System.in); //declaring Scanner

        int[][] rainfall = new int[4][7]; //declaring array to store rainfall


        System.out.println("Please enter the rainfall rate for 4 weeks: ");
        for(int i = 0; i < 4; i++){ //week loop
            System.out.println("\nWeek " + (i+1) + " "); 
            for(int j = 0; j < 7; j++) //day loop
            {
                System.out.println("Day " + (j+1) + " ");
                rainfall[i][j] = input.nextInt(); 
            }
        }

        //printing list
        for(int i = 0; i < 4; i++){ //week loop
            System.out.print("\nWeek " + (i+1) + ": "); 
            for(int j = 0; j < 7; j++) //day loop
            {
                System.out.print(rainfall[i][j] + "  "); 
            }
        }
        
        //getting classification 
        System.out.println("\nClassification for each week: ");
        for(int i = 0; i < 4; i++){ //week loop
            double sum = 0;
            System.out.print("Week " + (i+1) + ": ");
            for(int j = 0; j < 7; j++) //day loop
            {
                sum += rainfall[i][j]; //getting sum of each week
            }
            getClassification(sum/7); 
        }
        input.close();
    }

    static void getClassification(double avg){
        if(avg >= 6.0)
        {
            System.out.println("High (" + avg + ")");
        }
        else if(avg < 6.0 && avg > 3.0)
        {
            System.out.println("Medium (" + avg + ")");
        }        
        else if(avg <= 3.0)
        {
            System.out.println("Low (" + avg + ")");
        }
    }
}
