public class QueueApp {

    public static void main(String[] args) {

        QueueCircularArray myQueue1 = new QueueCircularArray(6);
        QueueCircularArray myQueue2 = new QueueCircularArray(6);
        myQueue2.EnQueue(1);
        myQueue2.EnQueue(2);
        myQueue2.EnQueue(3);
        myQueue2.EnQueue(4);
        myQueue2.EnQueue(5);
        myQueue2.EnQueue(6);
        myQueue2.EnQueue(7);
        myQueue2.EnQueue(8);
        while(myQueue2.isEmpty() == false){
            myQueue1.EnQueue(myQueue2.DeQueue());
        }

        myQueue1.display();
    }
}
