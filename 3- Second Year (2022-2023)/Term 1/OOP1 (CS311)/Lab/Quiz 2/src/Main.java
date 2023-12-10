//LAB QUIZ 2 CS311 OOP1 - Yosef Mohamed Ahmed - 2210009123 - 7M6
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {


        Scanner input = new Scanner(System.in);
        System.out.println("Please enter your student type: ");
        System.out.println("1- Bachelors");
        System.out.println("2- Diploma\n");
        int type = input.nextInt();
        input.nextLine(); //clear buffer
        switch (type) {
            case 1: //Bachelor Students
            Bachelor bachelor = new Bachelor();
            bachelor.status = Status.ACTIVE; //default is ACTIVE

            System.out.println("Please enter your ID:");
            bachelor.setID(input.nextLine());
            System.out.print("Please enter your name: ");
            bachelor.setName(input.nextLine());
            System.out.print("Please enter your address: ");
            bachelor.setAddress(input.nextLine());

            while(true) //Make sure GPA is between 0.0 and 4.0
            {
                System.out.print("Please enter your current semester GPA: ");
                double GPA = input.nextDouble();
                if (GPA >= 0.0 && GPA <= 4.0)
                {
                    bachelor.setGPA(GPA);
                    break;
                }
                System.out.println("Please enter a valid GPA between 0.0 and 4.0");
            }

            System.out.println("Please Enter your current hours:");
            bachelor.setHours(input.nextInt());

            bachelor.checkGradute(bachelor.hours);


            //Printing Bachelor Student information
            System.out.println("Student Information: ");
            System.out.println("Name: " + bachelor.name);
            System.out.println("Address: " + bachelor.address);
            System.out.println("Total GPA: " + bachelor.calculateGPA(bachelor.GPA));
            System.out.println("ID: " + bachelor.ID);
            System.out.println("Total Hours: " + bachelor.hours);

            System.out.println("Current Status: " + bachelor.status);
            break;
            case 2: //Diploma Students
            Diploma diploma = new Diploma();
            diploma.status = Status.ACTIVE;  //default is ACTIVE

            System.out.println("Please enter your ID:");
            diploma.setID(input.next());
            System.out.print("Please enter your name: ");
            diploma.setName(input.next());
            input.nextLine(); //clear buffer
            System.out.print("Please enter your address: ");
            diploma.setAddress(input.nextLine());
            while(true) //Make sure GPA is between 0.0 and 4.0
            {
                System.out.print("Please enter your current semester GPA: ");
                double GPA = input.nextDouble();
                if (GPA >= 0.0 && GPA <= 4.0)
                {
                    diploma.setGPA(GPA);
                    break;
                }
                System.out.println("Please enter a valid GPA between 0.0 and 4.0");
            }
            System.out.println("Please Enter your current hours:");
            diploma.setHours(input.nextInt());

            diploma.checkGradute(diploma.hours);


            //Printing Diploma Student information
            System.out.println("Student Information: ");
            System.out.println("Name: " + diploma.getName());
            System.out.println("Address: " + diploma.getAddress());
            System.out.println("Total GPA: " + diploma.calculateGPA(diploma.GPA));
            System.out.println("ID: " + diploma.getID());
            System.out.println("Total Hours: " + diploma.getHours());

            System.out.println("Current Status: " + diploma.status);

            break;

            default: //if neither 1 or 2 inputed.
            System.out.println("Thats not a correct type. Please try again.");
            System.exit(0);
        }

        input.close(); //close Scanner
    }
}