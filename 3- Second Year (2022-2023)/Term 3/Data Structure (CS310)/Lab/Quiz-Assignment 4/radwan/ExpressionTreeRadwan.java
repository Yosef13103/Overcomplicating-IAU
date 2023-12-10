import java.util.Stack;

public class ExpressionTreeRadwan
{
    // Node class
    class Node
    {
        String value;
        Node left;
        Node right;

        Node(String value)
        {
            this.value = value;
        }
    }

    // Root of the tree
    Node root;

    // Build tree from prefix expression
    ExpressionTreeRadwan(String prefix)
    {
        root = constructTree(prefix);
    }

    // Construct tree from prefix expression
    private Node constructTree(String prefix)
    {
        // Start a stack
        Stack<Node> stack = new Stack<>();

        // Iterate through the prefix expression in reverse order
        for (int i = prefix.length() - 1; i >= 0; i--)
        {
            // Get the current character
            char c = prefix.charAt(i);

            // Create a new node
            Node node = new Node(String.valueOf(c));

            // If the current character is an operator
            if (isOperator(c))
            {
                try
                {
                    // Pop the top two nodes from the stack
                    node.left = stack.pop();
                    node.right = stack.pop();
                }
                catch (Exception e)
                {
                    System.out.println("Invalid prefix expression");
                    return null;
                }

            }

            // Push the node to the stack either way
            stack.push(node);
        }

        // After the stack is empty, the last node is the root
        return stack.pop();
    }

    // Check if a character is an operator
    private boolean isOperator(char c)
    {
        return c == '+' || c == '-' || c == '*' || c == '/';
    }

    // ================================== PRINTING ==================================
    public void printInfix()
    {
        printInfix(root);
    }

    private void printInfix(Node node)
    {
        if (node == null)
        {
            return;
        }
        printInfix(node.left);
        System.out.print(node.value);
        printInfix(node.right);
    }

    public void printPostfix()
    {
        printPostfix(root);
    }

    private void printPostfix(Node node)
    {
        if (node == null)
        {
            return;
        }
        printPostfix(node.left);
        printPostfix(node.right);
        System.out.print(node.value);
    }

    public void printPrefix()
    {
        printPrefix(root);
    }

    private void printPrefix(Node node)
    {
        if (node == null)
        {
            return;
        }
        System.out.print(node.value);
        printPrefix(node.left);
        printPrefix(node.right);
    }

    public static void main(String[] args)
    {
        ExpressionTreeRadwan tree = new ExpressionTreeRadwan("*a+b*c+de");
        tree.printPrefix();
        System.out.println();
        tree.printPostfix();
        System.out.println();
        tree.printInfix();
        System.out.println();
    }
}
