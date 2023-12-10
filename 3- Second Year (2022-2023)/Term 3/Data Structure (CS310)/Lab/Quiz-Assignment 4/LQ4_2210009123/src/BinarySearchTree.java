//LQ4_2210009123 - Yosef Ahmed - 9M2 - CS310 - Assignment 4 - Q1
// Q1: Write a program in Java that accepts a pointer to the binary search tree and deletes the smallest element from the tree

public class BinarySearchTree
{
    class BinaryTreeNode
    {
        private int value;
        private BinaryTreeNode leftChild;
        private BinaryTreeNode rightChild;
        private BinaryTreeNode parent;

        public BinaryTreeNode(int value, BinaryTreeNode leftChild, BinaryTreeNode rightChild, BinaryTreeNode parent) //Constructor
        {
            this.value = value;
            this.leftChild = leftChild;
            this.rightChild = rightChild;
            this.parent = parent;
        }

        // Setters and Getters
        public int getValue()
        {
            return value;
        }
        public BinaryTreeNode getLeftChild()
        {
            return leftChild;
        }
        public BinaryTreeNode getRightChild()
        {
            return rightChild;
        }
        public BinaryTreeNode getParent()
        {
            return parent;
        }
        public void setValue(int value)
        {
            this.value = value;
        }
        public void setLeftChild(BinaryTreeNode leftChild)
        {
            this.leftChild = leftChild;
        }
        public void setRightChild(BinaryTreeNode rightChild)
        {
            this.rightChild = rightChild;
        }
        public void setParent(BinaryTreeNode parent)
        {
            this.parent = parent;
        }
    }

    private BinaryTreeNode root;
    private int size;

    BinarySearchTree() // Constructor
    {
        root = null;
        size = 0;
    }

    //Setters and Getters
    public BinaryTreeNode getRoot()
    {
        return root;
    }
    boolean isEmpty()
    {
        return size == 0;
    }

    //Functions
    void insert(int keyVal)
    {
        BinaryTreeNode newNode = new BinaryTreeNode(keyVal, null, null, null);
        if (isEmpty())
        {
            root = newNode;
            size++;
            return;
        }
        BinaryTreeNode current = root;
        BinaryTreeNode parent;
        while (true)
        {
            parent = current;
            if (keyVal == current.value)
            {
                System.out.println("Duplicate value " + keyVal + " found. Insertion failed.");
                return;
            }
            else if (keyVal < current.value) // Left side insertion if keyVal is smaller than current.value
            {
                current = current.leftChild;
                if (current == null)
                {
                    parent.leftChild = newNode;
                    break;
                }
            }
            else //right side insertion if keyVal is larger than current.value
            {
                current = current.rightChild;
                if (current == null)
                {
                    parent.rightChild = newNode;
                    break;
                }
            }
        }
        newNode.parent = parent;
        size++;

        System.out.println("Value " + keyVal + " inserted.");
    }

    void deleteMin(BinaryTreeNode node)
    {
        int min = findMin(node).getValue();
        delete(node, findMin(node));
        System.out.println("\nSmallest element " + min + " deleted.");
    }

    private void delete(BinaryTreeNode node, BinaryTreeNode nodeDel)
    {
        BinaryTreeNode parent;
        // If it is root node
        if (nodeDel == node)
        {
            if (nodeDel.getRightChild() != null)
            {
                nodeDel.getRightChild().setParent(null);
                root = nodeDel.getRightChild();
            }
            else
            {
                nodeDel.getLeftChild().setParent(null);
                root = nodeDel.getLeftChild();
            }
            return;
        }
        // Leaf node deletion
        if (nodeDel.getLeftChild() == null && nodeDel.getRightChild() == null)
        {
            parent = nodeDel.getParent();
            if(parent.getValue() > nodeDel.getValue())
            {
                parent.setLeftChild(null);
            }
            else
            {
                parent.setRightChild(null);
            }
        }
        // If has child bigger than it (right child)
        if(nodeDel.getRightChild() != null)
        {
            parent = nodeDel.getParent();
            parent.setLeftChild(nodeDel.getRightChild()); // Set the parent's new left child to the delNode's right child
        }
        // No need to check for 2 children as smallest element will always be a leaf node or a node with one child to the right
    }

    private BinaryTreeNode findMin(BinaryTreeNode node)
    {
        if (isEmpty())
        {
            return null;
        }
        while(node.getLeftChild() != null)
        {
            node = node.getLeftChild();
        }

        return node;
    }

    // Printing

    void inOrder(BinaryTreeNode node) // Left, Root, Right
    {
        if (node != null)
        {
            inOrder(node.getLeftChild());
            System.out.print(node.getValue() + " ");
            inOrder(node.getRightChild());
        }
    }

    void postOrder(BinaryTreeNode node) // Left, Right, Root
    {
        if (node != null)
        {
            postOrder(node.getLeftChild());
            postOrder(node.getRightChild());
            System.out.print(node.getValue() + " ");
        }
    }

    void preOrder(BinaryTreeNode node) // Root, Left, Right
    {
        if (node != null)
        {
            System.out.print(node.getValue() + " ");
            preOrder(node.getLeftChild());
            preOrder(node.getRightChild());
        }
    }
}