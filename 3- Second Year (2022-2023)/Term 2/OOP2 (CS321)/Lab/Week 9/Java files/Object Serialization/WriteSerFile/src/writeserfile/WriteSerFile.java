/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package writeserfile;
import java.io.EOFException;     
import java.io.IOException;      
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.NoSuchElementException;
import java.util.Scanner;


public class WriteSerFile {

 /* private static ObjectOutputStream output;

   public static void main(String[] args)
   {
      openFile();
      addRecords();
      closeFile();
   } 

   // enable user to select file to open
   public static void openFile()
   {
      try // open file
      {
         output = new ObjectOutputStream(Files.newOutputStream(Paths.get("clients.ser")));
      } 
      catch (IOException ioException)
      {
         System.err.println("Error opening file.");
         System.exit(1);
      } 
   }

   // read record from file
   public static void addRecords()
   {
      Scanner input = new Scanner(System.in);
      System.out.printf("%s%n%s%n%s", "Enter Account number,First Name, Last Name, Balance.","Enter end-of-file indicator to end input.","?");

      while ( ! input.hasNext("#")) {
          
        try {
      
              Account record = new Account (input.nextInt(), input.next(), input.next(), input.nextDouble());

            // display record contents
              output.writeObject(record);
         }     
      catch (NoSuchElementException e)
      {
         System.err.println("Invalid object type. Terminating.");
         input.nextLine();
      } 
      catch (IOException e)
      {
         System.err.println("Error writing to file. Terminating.");
         break;
      } 
        System.out.print("?");
   } // end method readRecords
 
}
   // close file and terminate application
   public static void closeFile()
   {
      try
      {
         if (output != null)
            output.close();
      } 
      catch (IOException ioException)
      {
         System.err.println("Error closing file. Terminating.");
         System.exit(1);
      } 
   } 
} // end class ReadSequentialFile
*/
    private static ObjectInputStream input;

   public static void main(String[] args)
   {
      openFile();
      readRecords();
      closeFile();
   } 

   // enable user to select file to open
   public static void openFile()
   {
      try // open file
      {
         input = new ObjectInputStream(Files.newInputStream(Paths.get("clients.ser")));
      } 
      catch (IOException ioException)
      {
         System.err.println("Error opening file.");
         System.exit(1);
      } 
   }

   // read record from file
   public static void readRecords()
   {
      System.out.printf("%-10s%-12s%-12s%10s%n", "Account",
         "First Name", "Last Name", "Balance");
 double sum = 0;
      try 
      {
         
         while (true) // loop until there is an EOFException
         { 
            Account record = (Account) input.readObject();
          
            // display record contents
            int accountId = record.getAccount();
            String fname =  record.getFirstName();
            String lname =  record.getLastName();
            double bal = record.getBalance();
            sum+=bal;
            System.out.printf("%-10d%-12s%-12s%10.2f%n", accountId , fname , lname, bal );
         } 
      }
      catch (EOFException endOfFileException)
      {
         System.out.printf("%nNo more records%n");
         System.out.printf("sum = "+sum);
      } 
      catch (ClassNotFoundException classNotFoundException)
      {
         System.err.println("Invalid object type. Terminating.");
      } 
      catch (IOException ioException)
      {
         System.err.println("Error reading from file. Terminating.");
      } 
   } // end method readRecords

   // close file and terminate application
   public static void closeFile()
   {
      try
      {
         if (input != null)
            input.close();
      } 
      catch (IOException ioException)
      {
         System.err.println("Error closing file. Terminating.");
         System.exit(1);
      } 
   } 
} // end class ReadSequentialFile
