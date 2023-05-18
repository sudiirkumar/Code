import java.util.LinkedList;
import java.util.Queue;
import java.lang.Math;
class BinaryTree{
    static class Node{
        int data;
        Node left,right;

        Node(int data){
            this.data = data;
            left = right = null;
        }
    }
    static class NodeInfo{
        int ht;
        int dia;
        NodeInfo(int ht, int dia){
            this.dia = dia;
            this.ht = ht;
        }
    }
    static int i = 0;
    public static Node buildPreOrder(int[] arr){
        if(arr[i]==-1){
            return null;
        }
        Node new_node = new Node(arr[i]);
        i++;
        new_node.left = buildPreOrder(arr);
        i++;
        new_node.right = buildPreOrder(arr);
        return new_node;
    }
    public static void preOrder(Node root){
        if(root==null){
            System.out.print("N ");
            return;
        }
        System.out.print(root.data+" ");
        preOrder(root.left);
        preOrder(root.right);
    }
    public static void postOrder(Node root){
        if(root==null){
            System.out.print("N ");
            return;
        }
        postOrder(root.left);
        postOrder(root.right);
        System.out.print(root.data+" ");
    }
    public static void inOrder(Node root){
        if(root==null){
            System.out.print("N ");
            return;
        }
        inOrder(root.left);
        System.out.print(root.data+" ");
        inOrder(root.right);
    }
    public static void levelOrder(Node root){
        Queue<Node> q = new LinkedList<>();
        q.add(root);
        q.add(null);
        while(!q.isEmpty()){
            Node currNode = q.remove();
            if(currNode==null){
                System.out.println();
                if(q.isEmpty()){
                    break;
                }
                q.add(null);
            }
            else{
                if(currNode.left!=null)
                    q.add(currNode.left);
                if(currNode.right!=null)
                    q.add(currNode.right);
                System.out.print(currNode.data+" ");
            }
        }
    }
    public static int height(Node root){
        if(root==null){
            return 0;
        }
        int leftHeight = height(root.left);
        int rightHeight = height(root.right);
        return Math.max(leftHeight,rightHeight)+1;
    }
    public static int diameter1(Node root){
        if(root==null){
            return 0;
        }
        int dia1 = diameter1(root.left);
        int dia2 = diameter1(root.right);
        int dia3 = height(root.left) + height(root.right) + 1;
        return Math.max(dia1,Math.max(dia2,dia3));
    }
    public static NodeInfo diameter2(Node root) {
        if(root==null){
            return new NodeInfo(0, 0);
        }
        NodeInfo left = diameter2(root.left);
        NodeInfo right = diameter2(root.right);
        int ht = Math.max(left.ht,right.ht)+1;
        int dia1 = left.dia;
        int dia2 = right.dia;
        int dia3 = left.ht + right.ht + 1;
        return new NodeInfo(ht, Math.max(dia1,Math.max(dia2,dia3)));
    }
    public static int count(Node root){
        if(root==null){
            return 0;
        }
        return count(root.left) + count(root.right) + 1;
    }
    public static int sum(Node root){
        if(root==null){
            return 0;
        }
        return sum(root.left) + sum(root.right) + root.data;
    }
    public static void main(String[] args) {
        int arr[] = {1,2,3,-1,-1,4,-1,-1,5,6,-1,-1,7,-1,-1};
        Node root = buildPreOrder(arr);
        preOrder(root);
        System.out.println();
        inOrder(root);
        System.out.println();
        postOrder(root);
        System.out.println();
        levelOrder(root);
        System.out.println(height(root));
        System.out.println(diameter2(root).ht);
        System.out.println(diameter1(root));
        System.out.println(diameter2(root).dia);
    }
}