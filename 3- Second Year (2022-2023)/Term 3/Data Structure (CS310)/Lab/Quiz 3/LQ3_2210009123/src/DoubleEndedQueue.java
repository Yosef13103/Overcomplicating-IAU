// Yosef Ahmed - 2210009123 - 9M2 - CS310 Quiz 3

public class DoubleEndedQueue
{
    class Node
    {
        private int element;
        private Node next;
        private Node prev;

        public Node(int element, Node next, Node prev)
        {
            this.element = element;
            this.next = next;
            this.prev = prev;
        }

        public int getElement(){
            return element;
        }

        @Override
        public String toString()
        {
            return element + "";
        }
    }

    Node front = null;
    Node rear = null;
    private int count = 0;

    boolean isEmpty()
    {
        return (count == 0);
    }

    public void display()
    {
        Node current = front;
        if (current == null)
        {
            System.out.println("Queue is empty");
            return;
        }

        while (current != null)
        {
            System.out.println(current);
            current = current.next;
        }
    }

    void EnQueueRear(int value) // Enqueue to the rear of the queue (as a normal queue does)
    {
        Node newNode = new Node(value, null, null);
        if (isEmpty())
        {
            front = rear = newNode;
        }
        else
        {
            rear.next = newNode;
            newNode.prev = rear;
            rear = newNode;
        }
        count++;
    }

    Node DeQueueFront() // Dequeue from the front of the queue (as a normal queue does)
    {
        if (isEmpty())
        {
            System.out.println("Queue is Underflow");
            return null;
        }
        else
        {
            Node temp = front;
            front = front.next;
            if(front != null)
            {
                front.prev = null;
            }
            count--;
            return temp;
        }
    }

    void EnQueueFront(int value) // Enqueue to the front of the queue
    {
        Node newNode = new Node(value, null, null);
        if (isEmpty())
        {
            front = rear = newNode;
        }
        else
        {
            front.prev = newNode;
            newNode.next = front;
            front = newNode;
        }
        count++;
    }

    Node DeQueueRear() // Dequeue from the rear of the queue
    {
        if (isEmpty())
        {
            System.out.println("Underflow");
            return null;
        }
        else
        {
            Node temp = rear;
            rear = rear.prev;
            if(rear != null)
            {
               rear.next = null;
            }
            count--;
            return temp;
        }
    }
}

