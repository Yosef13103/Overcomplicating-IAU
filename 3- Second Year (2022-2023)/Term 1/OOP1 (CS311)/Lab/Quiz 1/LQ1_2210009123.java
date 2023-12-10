//LAB QUIZ 1 CS311 OOP1 - Yosef Mohamed Ahmed - 2210009123 - 7M6
public class LQ1_2210009123 {
    public static void main(String[] args) //main method
    {

        //**Question C**
        String string = generateSrt(); //generating the string
        System.out.println("The number of spaces in the string are: " + countSpaces(string)); //print the amount of spaces
        System.out.println("The string is:"); //printing the string
        System.out.println(string);
        
    }

    public static String generateSrt()                  //**Question A**
    {
        String string = ""; //creating the string with no spaces

        for (int i = 1 ; i <= 5; i++) 
        {   
            for (int j = 0; j < i; j++) //adding the stars (*)
            {
                string += "*"; 
            }
            for (int j = i; j < 5; j++) //adding a spaces ( )
            {
                string += " "; 
            }
            string += "\n"; //new line
        }
        return string; //return the final string
    }

    public static int countSpaces(String str)                   //**Question B**
    {
        int count = 0; //variable for counting spaces
        
        for(int i = 0; i < str.length(); i++) 
        {
            if(str.charAt(i) == ' ') //if there is a space (' ') at this position
            {
                  count++; //increment the counting variable
            }
        }
        return count; //return the total amount of spaces
    }
}
