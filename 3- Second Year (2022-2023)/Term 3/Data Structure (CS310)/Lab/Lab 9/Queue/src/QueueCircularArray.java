
public class QueueCircularArray {

    int front = 0, rear = 0, size = 0, count = 0;
    private int Queue[];

    QueueCircularArray(int maxSize) {
        Queue = new int[maxSize];
        this.size = maxSize;
    }
    public boolean isEmpty() {return count == 0;}
    public boolean isFull() {return count == size;}
    public int getFront() {return Queue[front];}
    public int getSize() {return count;}
    
    public void EnQueue(int value) {
        if (isFull()) {
            System.out.println("Queue is Overflow");
            return;
        }
        Queue[rear] = value;
        rear = (rear + 1) % size;
        count++;
        System.out.println(value + "- Added to Queue.");
    }
    
    
    public int DeQueue() {
        if (isEmpty()) {
            System.out.println("Queue is Underflow");
            return -1;
        }
        int temp=Queue[front];
        front = (front + 1) % size;
        count--;
        System.out.println(temp + "- Deleted from Queue");
        return temp;

    }

    public void display() {
        System.out.println("---- Display Method ------ ");
        if (isEmpty()) {
            System.out.println("Queue is Empty..");
            return;
        }
        if (rear > front) {
            for (int i = front; i < rear; i++) {
                System.out.print(Queue[i] + " ");
            }
        } else {
            for (int i = front; i < size; i++) {
                System.out.print(Queue[i] + " ");
            }
            for (int i = 0; i < rear; i++) {
                System.out.print(Queue[i] + " ");
            }
        }
        System.out.println();
    }

 public int getRear() {
        if(rear==0 && count!=0)
            return Queue[size-1];
       else
            return Queue[rear-1];
    }
}
