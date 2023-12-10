/* Write a program that converts a Fahrenheit degree to Celsius using the formula:
celsius = ( 5 )( fahrenheit - 32) */

import java.util.Scanner;
public class Task2 {
    public static void main(String[] args) throws Exception {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter a temperature in Fahrenheit: ");
        double F = input.nextDouble();
        double C = ((5.0/9.0)*(F - 32.0));

        System.out.println("Temperature in Celcius is: " + C);
        input.close();
    }
}
