/* Write a Java program using SWITCH statement, that takes a month value as input and 
display its corresponding name and number of days */
import java.util.Scanner;
public class Task2 {
    public static void main(String[] args) throws Exception {
        Scanner input = new Scanner(System.in);
        boolean flag = false;
        while(true)
        {
            System.out.println("Please enter a month value: ");
            int month = input.nextInt();
            switch (month)
            {
                case 1:
                    System.out.println("January, 31 days");
                    break;
                case 2:
                System.out.println("February, 28 days (its a leap year)");
                    break;
                case 3:
                    System.out.println("March, 31 days");
                    break;
                case 4:
                    System.out.println("April, 30 days");
                    break;
                case 5:
                    System.out.println("May, 31 days");
                    break;
                case 6:
                    System.out.println("June, 30 days");
                    break;
                case 7:
                    System.out.println("July, 31 days");
                    break;
                case 8:
                    System.out.println("August, 31 days");
                    break;
                case 9:
                    System.out.println("September, 30 days");
                    break;
                case 10:
                    System.out.println("October, 31 days");
                    break;
                case 11:
                    System.out.println("November, 30 days");
                    break;
                case 12:
                    System.out.println("December, 31 days");
                    break;
                default:
                        System.out.println("That value is not a month.");
                        flag = true;
                        break;             
            }
            if(flag == false) 
            {
                break;
            }
        }
        input.close();
    }  
}
