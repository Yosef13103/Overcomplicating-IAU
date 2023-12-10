//LQ4_2210009123 - Yosef Ahmed - 9M2 - CS310 - Assignment 4 - Q2
// Q2: Write a Java program that reads the prefix expression, builds the tree and prints the post fix form of it.

public class ExpressionTree
{
    class Node
    {
        char value;
        Node leftChild;
        Node rightChild;

        Node(char value)
        {
            this.value = value;
            leftChild = rightChild = null;
        }
    }

    Node root;
    int i; // Index of the current character in the prefix expression

    public ExpressionTree(String prefix) // Constructor
    {
        root = buildTree(prefix, prefix.length());
    }

    private Node buildTree(String prefix, int size)
    {
        if (i >= size)
        {
            return null;
        }

        Node newNode = new Node(prefix.charAt(i));

        // If current node is an operator, build its left and right subtrees
        if (isOperator(prefix.charAt(i)))
        {
            i++; // Move to next character to place it in the left child
            newNode.leftChild = buildTree(prefix, size);
            i++; // Move to next character to place it in the right child
            newNode.rightChild = buildTree(prefix, size);
        }
        return newNode;
    }

    // Checking if the char is an operator
    private boolean isOperator(char s)
    {
        return s == '+' || s == '-' || s == '*' || s == '/';
    }

    // Printing the tree in postfix form
    public void postOrder(Node node) // Left, Right, Root
    {
        if (node != null)
        {
            postOrder(node.leftChild);
            postOrder(node.rightChild);
            System.out.print(node.value);
        }
    }
}