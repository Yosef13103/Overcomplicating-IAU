public class BinarySearchTreeApp {
    public static void main(String[] args) {
        
        BinarySearchTree bst = new BinarySearchTree();
        bst.insert(50); bst.insert(30);
        bst.insert(100); bst.insert(40);
        bst.insert(70); bst.insert(60); bst.insert(80);
        
        System.out.println("---InOrder Traversal:------");
        bst.inorder(bst.getRoot());
        System.out.println("---PreOrder Traversal:------");
        bst.preorder(bst.getRoot());

        System.out.println("Minimum Node value: "+ bst.findMin(bst.getRoot()).getValue());

        if (bst.find(bst.getRoot(), 10) != null) {
            System.out.println("found");
        } else {
            System.out.println("Not found");
        }      

    }

}
