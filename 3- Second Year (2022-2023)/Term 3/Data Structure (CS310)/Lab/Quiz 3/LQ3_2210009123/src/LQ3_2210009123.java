// Yosef Ahmed - 2210009123 - 9M2 - CS310 Quiz 3
//Reverse a Queue using Double Ended Queue.

public class LQ3_2210009123 {
    public static void main(String[] args) {
        DoubleEndedQueue D = new DoubleEndedQueue();
        DoubleEndedQueue W = new DoubleEndedQueue();
        // Initial Enqueue of D
        D.EnQueueRear(1);
        D.EnQueueRear(2);
        D.EnQueueRear(3);
        D.EnQueueRear(4);
        D.EnQueueRear(5);
        D.EnQueueRear(6);
        D.EnQueueRear(7);
        D.EnQueueRear(8);

        System.out.println("D Queue: ");         // D = (1,2,3,4,5,6,7,8)
        D.display();
        System.out.println("\nW Queue: ");         // W = ()
        W.display();

        while (!D.isEmpty())
        {
            W.EnQueueRear(D.DeQueueFront().getElement()); // Adding from the front of D to the rear of W, so that it is in order
        }

        System.out.println("\nD Queue after transfering to W: ");         // D = ()
        D.display();
        System.out.println("\nW Queue after transfering from D: ");         // W = (1,2,3,4,5,6,7,8)
        W.display();

        while (!W.isEmpty())
        {
            D.EnQueueRear(W.DeQueueRear().getElement()); // Adding from the rear of W to the rear of D, so that D is in reverse order from the original
        }
        System.out.println("\n--------Result--------\nD Queue after reverse: ");
        D.display();
    }
}
