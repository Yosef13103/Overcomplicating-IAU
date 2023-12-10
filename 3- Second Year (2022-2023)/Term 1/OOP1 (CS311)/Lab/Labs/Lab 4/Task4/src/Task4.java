/* Suppose you need to implement a system for a machine that has 5 statuses: ON, OFF, 
START, IN PROGRESS and DONE.
Using the enumerated data type called “Machine”, create java method to check the 
selected button and show the related messages
When the users press any button, the machine must respond with proper action as follow:
1. ON: display on the screen “The machine is ON”.
2. OFF: display on the screen “The machine is OFF, GOOD BYE”.
3. START: display on the screen “The machine is starting”.
4. IN PROGRESS: it is displayed when the machine is start.
5. DONE: when the progress is done.
*/

import java.util.Scanner;
public class Task4 {
    enum Machine{
        ON, OFF, START, IN_PROGRESS, DONE
    }

    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        System.out.println("Press a button: ");
        String choice = input.next().toUpperCase();
        check(Machine.valueOf(choice));

        input.close();
    }

    static void check(Machine c)
    {
        switch(c)
        {
            case ON:
            System.out.println("The Machine is ON");
            break;
            case OFF:
            System.out.println("The Machine is OFF");
            break;
            case START:
            System.out.println("The Machine is STARTING");
            break;
            case IN_PROGRESS:
            System.out.println("The Machine is IN PROGRESS");
            break;
            case DONE:
            System.out.println("The Machine is DONE");
            break;
        }
    }
}
