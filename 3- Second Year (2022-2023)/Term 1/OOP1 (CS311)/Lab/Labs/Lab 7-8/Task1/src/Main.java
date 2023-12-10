import java.util.Scanner;


public class Main {
    static Scanner input = new Scanner(System.in);
    static int StudNo = 0;
    static Students[] student;
    
    public static void main(String[] args) throws Exception {
        
        System.out.println("Welcome, Please enter the number of students you wish to add: ");
        StudNo = input.nextInt();

        student = new Students[StudNo];
        
        while(true)
        {
            menu();
        }
    }

    public static void menu()
    {
        System.out.println("==========Menu==========");
        System.out.println("1. Add Student");
        System.out.println("2. Update Student's information");
        System.out.println("3. View All Students\n");;
        System.out.println("0. Exit");
        int choice = input.nextInt();
        switch (choice)
        {
            case 1:
                if(Students.StudCounter < StudNo)
                {
                    addStudent();
                }
                else
                {
                    System.out.println("Maximum amount of students reached");
                }
                break;
            case 2:
                if(!(Students.StudCounter == 0))
                {
                    editStudent();
                }
                else
                {
                    System.out.println("There are no students to edit.");
                }
                break;
            case 3:
                if(!(Students.StudCounter == 0))
                {
                   printStudents();
                }
                else
                {
                   System.out.println("There are no students to view.");
                }
                break;
            case 0:
                System.out.println("Exiting Student Management System");
                System.exit(0);
                break;
            default:
                System.out.println("That isn't a valid option");
        }
    }

    public static void addStudent()
    {
        System.out.println("======================");
        System.out.println("Enter students ID:");
        String id = input.next();
        System.out.println("Enter students first name:");
        String firstName = input.next();
        System.out.println("Enter students last name:");
        String lastName = input.next();
        System.out.println("Enter students birth year");
        int birthYear = input.nextInt();
        System.out.println("Enter students GPA: ");
        double gpa = input.nextDouble();
        System.out.println("Enter students major: ");
        String major = input.next();
        System.out.println("Enter students degree: ");
        String degree = input.next();
        System.out.println("Enter students graduation year: ");
        int gradYear = input.nextInt();
        student[Students.getStudCounter()] = new Students(id, firstName, lastName, gpa, birthYear, new Study_Program(major, degree, gradYear));
        System.out.println("Student added successfully, number of students is now " + Students.StudCounter);
    }

    public static void editStudent()
    {
        System.out.println("======================");
        System.out.println("Enter ID of student you wish to edit:");        
        String id = input.next();
        for (int i = 0; i < Students.StudCounter; i++)
        {
            if (student[i].getID().equals(id))
            {
                System.out.println("======================");
                System.out.println("Enter students new ID:");
                student[i].setID(input.next());
                System.out.println("Enter students new first name:");
                student[i].setFirstName(input.next());
                System.out.println("Enter students new last name:");
                student[i].setLastName(input.next());
                System.out.println("Enter students new birth year");
                student[i].setBirthDate(input.nextInt());
                System.out.println("Enter students new GPA: ");
                student[i].setGPA(input.nextDouble());
                String major = input.next();
                System.out.println("Enter students degree: ");
                String degree = input.next();
                System.out.println("Enter students graduation year: ");
                int gradYear = input.nextInt();
                student[i].setQualification(new Study_Program(major, degree, gradYear));
                System.out.println("Student information updated successfully");
            }
        }
    }

    public static void printStudents()
    {
        System.out.println("======================");
        System.out.println("Students:");
        for (int i = 0; i < Students.StudCounter; i++)
        {
            System.out.println("ID: " + student[i].getID());
            System.out.println("Name: " +student[i].getName());
            System.out.println("Birth Year: " + student[i].getBirthDate());
            System.out.println("GPA: " + student[i].getGPA());
            System.out.println("======================");
        }
    }
}
