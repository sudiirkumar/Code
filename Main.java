
//{ Driver Code Starts
import java.io.*;
import java.util.*;

class Node {
    int data;
    Node next;

    Node(int x) {
        data = x;
        next = null;
    }
}

class Main {
    // Function to print nodes in a given circular linked list
    static void printList(Node head) {
        if (head == null) {
            System.out.println("empty");
            return;
        }
        Node temp = head;
        do {
            System.out.print(temp.data + " ");
            temp = temp.next;
        } while (temp != head);
        System.out.println();
    }

    public static void main(String[] args) throws IOException {
        ArrayList<Integer> arr = new ArrayList<>();
        Scanner sc = new Scanner(System.in);
        arr.add(10);
        arr.add(7);
        arr.add(8);
        arr.add(4);
        arr.add(6);
        int key = sc.nextInt();
        Node head = new Node(arr.get(0));
        Node tail = head;
        for (int i = 1; i < arr.size(); ++i) {
            tail.next = new Node(arr.get(i));
            tail = tail.next;
        }
        tail.next = head; // Make the list circular
        Solution ob = new Solution();
        printList(head);
        Node current = ob.deleteNode(head, key);
        Node rev = ob.reverse(current);
        printList(rev);
    }
}
class Solution {
    // Function to reverse a circular linked list
    Node reverse(Node head) {
        // code here
        return head;
    }

    // Function to delete a node from the circular linked list
    Node deleteNode(Node head, int key) {
        // code here
        Node prev = head;
        Node curr = head.next;
        Node next = null;
        while (true) {
            next = curr.next;
            if(curr.data==key){
                curr = next;
                next = curr.next;
            }
            curr.next = prev;
            if (curr == head) {
                return prev;
            }
            if(next==head && head.data == key){
                next = next.next;
                next.next = curr;
                return curr;
            }
            prev = curr;
            curr = next;
        }
    }
}
