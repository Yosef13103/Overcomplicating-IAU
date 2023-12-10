// Lab Quiz 3 Task 1 - 2210009123
// Reading and Writing Sequential Files where you can append to the file.
import java.util.Scanner;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.Serializable;
import java.util.NoSuchElementException;
import java.io.EOFException;
import java.io.IOException;
import java.util.List;
import java.util.ArrayList;


public class LQ3T1_2210009123 implements Serializable
{
    private static FileOutputStream writeData;
    private static ObjectOutputStream  fileOutput;
    private static FileInputStream readData;
    private static ObjectInputStream fileInput;


    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        String choice = "";
        while(true)
        {
            System.out.println("Would you like to Read (R), Write (W), or Quit? (-1)");
            choice = input.nextLine().toLowerCase();
            if (choice.equals("w")) {
                writeRecords();
                break;
            }
            else if (choice.equals("r")) {
                readRecords();
                break;
            }
            else if (choice.equals("-1"))
            {
                System.out.println("Quitting...");
                System.exit(0);
            }
            else
            {
                System.out.println(choice);
                System.out.println("Invalid input");
            }
        }
        closeFile(choice);
        input.close(); // close Scanner
    }

    // read records from file
    public static void readRecords()
    {
        File file = new File("clients.ser");
        try
        {
            if (file.createNewFile())
            {
                System.out.println("File was not created, Creating file...");
            }
        } catch (IOException e)
        {
            System.err.println("Error creating file: " + e.getMessage() + ", Terminating.");
            System.exit(1);
        }

        System.out.printf("%-10s%-12s%-12s%10s%n", "\nAccount",
        "First Name", "Last Name", "Balance");
        List<Account> records = null;
        try
        {
            readData = new FileInputStream("clients.ser");
            fileInput = new ObjectInputStream(readData);

            while (true) // loop until there is an EOFException
            {
                records = (ArrayList<Account>) fileInput.readObject();

                // display record contents
                for (Account a : records)
                {
                    System.out.printf("%-10d%-12s%-12s%10.2f%n", a.getAccount(),
                        a.getFirstName(), a.getLastName(), a.getBalance());
                }
            }
        }
        catch (EOFException e)
        {
            System.out.printf("%nNo more records%n\n");
        }
        catch (ClassNotFoundException e)
        {
            System.err.println("Invalid object type: " + e.getMessage() + ", Terminating.");
            System.exit(1);
        }
        catch (IOException e)
        {
            System.err.println("Error reading from file: " + e.getMessage() + ", Terminating.");
            System.exit(1);
        }
    }

    // add records to file
    public static void writeRecords()
    {
        List<Account> records = new ArrayList<Account>();

        //reading from file to add to arraylist
        try
        {
            //open the file for reading
            File file = new File("clients.ser");
            file.createNewFile();
            readData = new FileInputStream("clients.ser");
            fileInput = new ObjectInputStream(readData);

            while (true) // loop until there is an EOFException
            {
                records = (ArrayList<Account>) fileInput.readObject();
            }
        }
        catch (EOFException e)
        {
            //do nothing
        }
        catch (ClassNotFoundException e)
        {
            System.err.println("Invalid object type: " + e.getMessage() + ", Terminating.");
            System.exit(1);
        }
        catch (IOException e)
        {
            System.err.println("Error reading from file: " + e.getMessage() + ", Terminating.");
            System.exit(1);
        }

        // open file for writing
        try
        {
            File file = new File("clients.ser");
            writeData = new FileOutputStream(file, false);
            fileOutput = new ObjectOutputStream(writeData);
        }
        catch (FileNotFoundException e)
        {
            System.err.println("Error opening file: " + e.getMessage() + ", Terminating.");
            System.exit(1);
        }
        catch (IOException e)
        {
            System.err.println("Error opening file: " + e.getMessage() + ", Terminating.");
            System.exit(1);
        }

        Scanner input = new Scanner(System.in);
        System.out.printf("%s%n%s%n? ",
           "Enter account number, first name, last name and balance.",
           "Enter end-of-file indicator to end input.");


        while (input.hasNext()) // loop until end-of-file indicator
        {
            try
            {
                // create new record added to arraylist
                Account record = new Account(input.nextInt(),
                input.next(), input.next(), input.nextDouble());
                records.add(record);

            }
            catch (NoSuchElementException e)
            {
                System.err.println("Invalid input. Please try again.");
                input.nextLine(); // discard input so user can try again
            }
            System.out.print("? ");
        }

        // write records to file
        try
        {
            fileOutput.writeObject(records);
            fileOutput.flush();
        }
        catch (IOException e)
        {
            System.err.println("Error writing to file: " + e.getMessage() + ", Terminating.");
            System.exit(1);
        }

        input.close();
    }

    // close file and terminate application
    public static void closeFile(String c)
    {
        try
        {
            if (c.equals("r") && fileOutput != null) // if reading
            {
                fileInput.close();
            }
            if (c.equals("w") && fileInput != null) //if writing
            {
                fileOutput.close();
            }
        }
        catch (IOException ioException)
        {
            System.err.println("Error closing file: " + ioException.getMessage() + ", Terminating.");
            System.exit(1);
        }
    }
}
