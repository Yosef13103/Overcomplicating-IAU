/*Write a Java program that takes three numbers as input then calculates and prints the 
average of the numbers and display the max and min number */

import java.util.Scanner;
public class Task1 {
    public static void main(String[] args) throws Exception {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter 3 numbers as inputs");
        double n1 = input.nextDouble();
        double n2 = input.nextDouble();
        double n3 = input.nextDouble();
        System.out.println("The average is " + (n1 + n2 + n3)/3.0);
        input.close();
    }
}
