public class BinarySearchTree {

    class BinaryTreeNode {

        private int value;
        private BinaryTreeNode leftChild;
        private BinaryTreeNode rightChild;
        private BinaryTreeNode parent;

        public BinaryTreeNode(int value, BinaryTreeNode leftChild,
                BinaryTreeNode rightChild, BinaryTreeNode parent) {
            this.value = value;
            this.leftChild = leftChild;
            this.rightChild = rightChild;
            this.parent = parent;
        }

        //Setters and Getters
        public int getValue() {
            return value;
        }

        public BinaryTreeNode getLeftChild() {
            return leftChild;
        }

        public BinaryTreeNode getRightChild() {
            return rightChild;
        }

        public BinaryTreeNode getParent() {
            return parent;
        }

        public void setValue(int value) {
            this.value = value;
        }

        public void setLeftChild(BinaryTreeNode leftChild) {
            this.leftChild = leftChild;
        }

        public void setRightChild(BinaryTreeNode rightChild) {
            this.rightChild = rightChild;
        }

        public void setParent(BinaryTreeNode parent) {
            this.parent = parent;
        }

    }
    private BinaryTreeNode root; //root of BST
    private int size; //number of nodes in BST   

    BinarySearchTree() {
        root = null;
        size = 0;
    }

    BinaryTreeNode getRoot() {
        return root;
    }

    int getSize() {
        return size;
    }

    boolean isEmpty() {
        return (size == 0);
    }

    
    void insert(int keyVal) {
        BinaryTreeNode newNode = new BinaryTreeNode(keyVal, null, null, null);
        if (isEmpty()) {root = newNode;size++;return;}
        BinaryTreeNode current = root;
        BinaryTreeNode parent;
        while (true) {
            parent = current;
            if (keyVal == current.value) {
                System.out.println("Duplicate Found");
                return;
            } else if (keyVal < current.value) {
                current = current.leftChild;
                if (current == null) {
                    parent.leftChild = newNode;
                    break;
                }
            } else {
                current = current.rightChild;
                if (current == null) {
                    parent.rightChild = newNode;
                    break;
                }
            }
        }//end loop
        newNode.parent = parent;size++;
    }

    
    
    public void delete(BinaryTreeNode TreeNode, int keyVal) {
        BinaryTreeNode Current, Parent;
        Current = find(TreeNode, keyVal);

// case - I: Leaf Node
        if (Current.getLeftChild() == null && Current.getRightChild() == null) {
            Parent = Current.getParent();
            if (Parent.getValue() > Current.getValue()) {
                Parent.setLeftChild(null);
            } else {
                Parent.setRightChild(null);
            }
        } // Case - II: Node have 1 child
        else if (Current.getLeftChild() == null || Current.getRightChild() == null) {
            Parent = Current.getParent();
            if (Parent.getValue() > Current.getValue()) {
                if (Current.getLeftChild() != null) {
                    Parent.setLeftChild(Current.getLeftChild());
                } else {
                    Parent.setLeftChild(Current.getRightChild());
                }
            } else {
                if (Current.getRightChild() != null) {
                    Parent.setRightChild(Current.getRightChild());
                } else {
                    Parent.setRightChild(Current.getLeftChild());
                }
            }
        } // Case - III: Node has 2 childs
        else {
            BinaryTreeNode minNode = findMin(Current.getRightChild());
            Current.setValue(minNode.getValue());
            delete(minNode, minNode.getValue());
        }
    }
    

    BinaryTreeNode find(BinaryTreeNode node, int keyVal) {
        if (node == null) {
            System.out.println("Searching fail");
            return null;
        }
        if (node.value == keyVal) {
            return node; //found
        }
        if (keyVal < node.value) {
            return find(node.leftChild, keyVal);
        } else {
            return find(node.rightChild, keyVal);
        }
    }

    
    
    
    // Traversal Methods: InOrder, PostOrder, PreOrder
    void inorder(BinaryTreeNode node) {
        if (node != null) {
            inorder(node.leftChild);
            System.out.println(node.value);
            inorder(node.rightChild);
        }
    }

    void preorder(BinaryTreeNode node) {
        if (node != null) {
            System.out.println(node.value);
            preorder(node.leftChild);
            preorder(node.rightChild);
        }
    }

    void postorder(BinaryTreeNode node) {
        if (node != null) {
            postorder(node.leftChild);
            postorder(node.rightChild);
            System.out.println(node.value);
        }
    }

    //Find Min/Max methods 
    BinaryTreeNode findMin(BinaryTreeNode node) {
        if (isEmpty()) {
            return null;
        }
        while (node.leftChild != null) {
            node = node.leftChild;
        }

        return node;
    }

    BinaryTreeNode findMax(BinaryTreeNode node) {
        if (isEmpty()) {
            return null;
        }
        while (node.rightChild != null) {
            node = node.rightChild;
        }

        return node;
    }
}

