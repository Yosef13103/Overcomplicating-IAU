package LabQuiz;

public class StackWithMax 
{
    private int[] stack;
    private int top;
    private int max;

    public StackWithMax(int size)
    {
        stack = new int[size];
        top = -1;
        max = Integer.MIN_VALUE;
    }

    public void push(int value)
    {
        if (top == stack.length - 1)
        {
            System.out.println("Stack is full");
            return;
        }
        stack[++top] = value;
        if (value > max)
        {
            max = value;
        }
    }

    public int pop()
    {
        if (top == -1)
        {
            System.out.println("Stack is empty");
            return -1;
        }
        int value = stack[top--];
        if (value == max)
        {
            max = Integer.MIN_VALUE;
            for (int i = 0; i <= top; i++)
            {
                if (stack[i] > max)
                {
                    max = stack[i];
                }
            }
        }
        return value;
    }

    public int getMax()
    {
        return max;
    }
    public static void main (String[] args)
    {
        StackWithMax stack = new StackWithMax(5);
        stack.push(3);
        stack.push(7);
        stack.push(1);
        stack.push(4);
        stack.push(2);
        System.out.println(stack.getMax()); //should print 7
        stack.pop();
        System.out.println(stack.getMax()); //should print 7
        stack.pop();
        stack.pop();
        System.out.println(stack.getMax()); //should print 7
    }
}
