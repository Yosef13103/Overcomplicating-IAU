 // Yosef Mohamed 2210009123 Quiz 1
public class LQ1_2210009123
{
    private Node head;
    private Node tail;
    private int size;
    private boolean locked;

    private class Node
    {
        private int data;
        private Node next;

        public Node(int data)
        {
            this.data = data;
            this.next = null;
        }
    }

    public LQ1_2210009123()
    {
    }

    //Locking and Unlocking methods:
    public void lock()
    {
        locked = true;
    }
    public void unlock()
    {
        locked = false;
    }


    public void add(int data) //only adds to the tail
    {
        if (data < 0)
        {
            System.out.println("The linked list cannot accept negative values (" + data + ")");
            return;
        }
        else if (size > 5)
        {
            System.out.println("The linked list cannot accept more than five nodes. (" + data + ")");
            return;
        }
        else if (locked)
        {
            System.out.println("The linked list is locked; you must remove the locking before adding.");
            return;
        }

        Node newNode = new Node(data);
        if (tail == null) {
            head = newNode;
            tail = newNode;
        } else {
            tail.next = newNode;
            tail = newNode;
        }
        size++;
    }

    public void remove() //only removes the head
    {
        if (locked)
        {
            System.out.println("The linked list is locked, you must remove the locking before deleting.");
            return;
        }
        else if (head == null)
        {
            return;
        }
        head = head.next;
        if (head == null)
        {
            tail = null;
        }
        size--;
        System.out.println("The head value successfully removed.");
    }



    public void display()
    {
        Node current = head;
        int i = 1;
        while (current != null)
        {
            System.out.println("Node " + i + ": " + current.data);
            current = current.next;
            i++;
        }
    }

    public static void main(String[] args) {
        LQ1_2210009123 list = new LQ1_2210009123();
        //Negative Values test:
        list.add(-1);
        list.add(-4);
        list.add(-6);
        list.add(-8);
        list.add(-9);
        System.out.println("Negative Values Test:");
        list.display();

        //More than 5 nodes test:
        list.add(9); //Node 1
        list.add(7); //Node 2
        list.add(3); //Node 3
        list.add(1); //Node 4
        list.add(8); //Node 5
        list.add(39); //Node 6 (Should fail to add)

        System.out.println("More than 5 nodes test:");
        list.display();

        //Locking Test:
        System.out.println("Locking Test:");
        list.lock(); // (Should lock the list)
        list.add(8); // (Should fail to add as the list is locked)
        list.remove(); // (Should fail to remove as the list is locked)

        //Unlocking Test:
        list.unlock(); // (Should unlock the list)
        list.remove(); // (Should remove the head)

    }
}
