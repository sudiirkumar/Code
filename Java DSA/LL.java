public class LL{
    Node head;
    private int size;
    LL(){
        size = 0;
    }
    class Node{
        int value;
        Node next;
        Node(int v){
            value = v;
            this.next = null;
        }
    }
    public Node middle(){
        if(head==null || head.next==null){
            return head;
        }
        Node slow = head;
        Node fast = head;
        while(fast.next!=null && fast.next.next!=null){
            slow = slow.next;
            fast = fast.next.next;
        }
        return slow;
    }
    public void addFirst(int data){
        Node n = new Node(data);
        size++;
        if(head==null){
            head = n;
            return;
        }
        n.next = head;
        head = n;
    }
    public void addLast(int data){
        Node temp = head;
        Node n = new Node(data);
        size++;
        if(head==null){
            head = n;
            return;
        }
        while(temp.next!=null){
            temp = temp.next;
        }
        temp.next = n;
    }
    public int getSize(){
        return this.size;
    }
    public void print(){
        if(head==null){
            System.out.println("The list is empty");
            return;
        }
        Node temp = head;
        while(temp!=null){
            System.out.print(temp.value+" -> ");
            temp = temp.next;
        }
        System.out.println("null");
    }
    public void delFirst(){
        if(head==null){
            return;
        }
        head = head.next;
        size--;
    }
    public void delLast(){
        if(head==null){
            return;
        }
        size--;
        if(head.next==null){
            head = null;
            return;
        }
        Node temp = head;
        while(temp.next.next!=null){
            temp = temp.next;
        }
        temp.next = null;
    }
    public void reverseIter(){
        if(head==null || head.next==null){
            return;
        }
        Node prevNode = head;
        Node currNode = head.next;
        Node nextNode;
        while(currNode!=null){
            nextNode = currNode.next;
            currNode.next = prevNode;
            prevNode = currNode;
            currNode = nextNode;
        }
        head.next = null;
        head = prevNode;
    }
    public Node reverseRec(Node head){
        if(head==null || head.next==null){
            return head;
        }
        Node newHead = reverseRec(head.next);
        head.next.next = head;
        head.next = null;
        return newHead;
    }


    public static void main(String[] args) {
        LL list = new LL();
        list.addFirst(1);
        list.print();
        list.addLast(2);
        list.addLast(3);
        list.print();
        System.out.println(list.getSize());
        list.reverseIter();
        list.print();
        list.head = list.reverseRec(list.head);
        list.print();
    }
}