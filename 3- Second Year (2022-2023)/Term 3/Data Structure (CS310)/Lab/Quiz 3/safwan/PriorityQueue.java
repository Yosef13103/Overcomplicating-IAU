package LabQuiz;
/**
 *
 * @author nmaIbrahim
 */
public class PriorityQueue {
    
    private class Node
    {
        private String value;
        private int key; // priority
        Node next;
        public Node(String value,int key,Node next)
        {
            this.value = value;
            this.key = key;
            this.next = next;
        }

        @Override
        public String toString() {
            return "key=" + key +"\tvalue=" + value +"\n";
        }
   }
    Node front=null;
    int size =0;
    int size(){return size;}
    boolean isEmpty(){return size ==0;}
    public Node getFront(){return front;}
    
    
    String DeQueue()
    {
        if(isEmpty())
        {
            System.out.println("Empty List.. ");
            return null;
        }        
        Node temp = front;
        front = front.next;
        size--;
        return temp.value;
    }
    void EnQueue(int key,String strVal)
    {
        Node newNode = new Node(strVal,key,null);
        if(isEmpty())
        {
            front = newNode;
            size++;
            return;
        }
        if(key < front.key)
        {
            newNode.next = front;
            front = newNode;
            size++;
            return;
        }
        Node current = front;
        while(current.next != null && current.next.key <= key)
        {
            current = current.next;
        }
        newNode.next = current.next;
        current.next = newNode;
        size++;
    }
     void Display() 
    {
        if(isEmpty())
        {
            System.out.println("Empty List.. ");
            return;
        }
        System.out.println("\nDisplay List: ");
        Node current = front;
        while (current != null) 
        {
            System.out.print(current.toString());
            current = current.next;
        }
     }
     
    public static void main(String[] args) {
        PriorityQueue Q1 = new PriorityQueue();
        Q1.EnQueue(1, "Mohammed");
        Q1.EnQueue(3, "Fahd");
        Q1.EnQueue(9, "Osama");
        Q1.EnQueue(5, "Mostafa");
        
        PriorityQueue Q2 = new PriorityQueue();
        Q2.EnQueue(2, "Hany");
        Q2.EnQueue(5, "Mostafa");
        Q2.EnQueue(10, "Marwan");
        Q2.EnQueue(6, "Hazem");
       
        PriorityQueue Q3 = MergeQueue(Q1,Q2);
        Q3.Display();

        }
    public static PriorityQueue MergeQueue(PriorityQueue Q1,PriorityQueue Q2)
    {
        PriorityQueue Q = new PriorityQueue ();
        while(!Q1.isEmpty() && !Q2.isEmpty())
        {
            if(Q1.front.key < Q2.front.key)
            {
                Q.EnQueue(Q1.front.key, Q1.front.value);
                Q1.DeQueue();
            }
            else
            {
                Q.EnQueue(Q2.front.key, Q2.front.value);
                Q2.DeQueue();
            }
        }
        while(!Q1.isEmpty())
        {
            Q.EnQueue(Q1.front.key, Q1.front.value);
            Q1.DeQueue();
        }
        while(!Q2.isEmpty())
        {
            Q.EnQueue(Q2.front.key, Q2.front.value);
            Q2.DeQueue();
        }
        return Q;
    }     
}

/** OUTPUT:
 
Display List: 
key=1   value=Mohammed
key=2   value=Hany    
key=3   value=Fahd    
key=5   value=Mostafa 
key=5   value=Mostafa 
key=6   value=Hazem   
key=9   value=Osama   
key=10  value=Marwan   */