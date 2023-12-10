//LQ4_2210009123 - Yosef Ahmed - 9M2 - CS310 - Assignment 4
// Q1: Write a program in Java that accepts a pointer to the binary search tree and deletes the smallest element from the tree
// Q2: Write a Java program that reads the prefix expression, builds the tree and prints the post fix form of it.

public class LQ4_221000912
{
    public static void main(String[] args) throws Exception
    {
        // Q1
        System.out.println("Q1: Write a program in Java that accepts a pointer to the binary search tree and deletes the smallest element from the tree");
        BinarySearchTree bst = new BinarySearchTree();
        int[] arr = {2, 3, 9, 4}; // The array of elements to be inserted in the tree
        for (int i = 0; i < arr.length; i++)
        {
            bst.insert(arr[i]);
        }

        // Printing the tree before deleting the smallest element
        System.out.println("\nThe tree in inorder is: ");
        bst.inOrder(bst.getRoot());
        System.out.println("\nThe tree in preorder is: ");
        bst.preOrder(bst.getRoot());
        System.out.println("\nThe tree in postorder is: ");
        bst.postOrder(bst.getRoot());
        System.out.println("");

        // Deleting the smallest element
        bst.deleteMin(bst.getRoot());

        // Printing the tree after deleting the smallest element
        System.out.println("\nAfter deleting the smallest element: ");
        System.out.println("The tree in inorder is: ");
        bst.inOrder(bst.getRoot());
        System.out.println("\nThe tree in preorder is: ");
        bst.preOrder(bst.getRoot());
        System.out.println("\nThe tree in postorder is: ");
        bst.postOrder(bst.getRoot());

        System.out.println("\n\n----------------------------------------------------------------");

        // Q2
        System.out.println("Q2: Write a Java program that reads the prefix expression, builds the tree and prints the post fix form of it.");
        String prefixExpression = "*a+b*c+de"; // The prefix expression

        ExpressionTree expTree = new ExpressionTree(prefixExpression);
        System.out.println("Prefix Expression:\n" + prefixExpression);

        System.out.println("Postfix expression:");
        expTree.postOrder(expTree.root); // Printing the postfix expression
        System.out.println();
    }
}