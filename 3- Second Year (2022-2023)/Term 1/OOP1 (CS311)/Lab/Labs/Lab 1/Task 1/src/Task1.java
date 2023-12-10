/*Write a Java program that takes the birth year from the user and prints her/his age. */

import java.util.Scanner;
public class Task1 {
    public static void main(String[] args) throws Exception {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter your birth year");
        int year = input.nextInt();
        int age = 2022-year;
        System.out.println("Your age is: " +  age + " years old");
        input.close();
    }
}
