// Yosef Ahmed - 2210009123 - 9M2 - CS310 Quiz 2

public class StackArray
{
    int top;;
    int[] StackArray;

    public StackArray(int size) // Constructor
    {
        StackArray = new int[size];
        top = -1;
    }

    public boolean isEmpty() // Check if stack is empty
    {
        return top == -1;
    }

    public boolean isFull() // Check if stack is full
    {
        return top == StackArray.length - 1;
    }

    public void push(int value) // Push value into stack
    {
        if (isFull())
        {
            System.out.println("Stack is full");
            return;
        }
        StackArray[++top] = value;
    }

    public int pop() // Pop value from stack
    {
        if (isEmpty())
        {
            System.out.println("Stack is empty");
            return -1;
        }
        int temp = StackArray[top];
        top = top - 1;
        return temp;
    }
}
