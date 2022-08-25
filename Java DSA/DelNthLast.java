public class DelNthLast extends LL {
    public static void main(String[] args) {
        //initialising the list
        LL list = new LL();   
        list.addLast(1);
        list.addLast(2);
        list.addLast(3);
        list.addLast(4);
        list.addLast(5);
        list.addLast(6);
        list.print();
        //finding the nth node from last
        int size = list.getSize();
        int n = 5;//nth node from last
        if(n==size){//if the target node is head
            list.head = list.head.next;
        }
        else{
            int idx = size - n;//idx of the element prev of node to be deleted
            Node temp = list.head;
            int i=1;
            while(i<idx){
                temp = temp.next;
                i++;
            }
            //del the node
            temp.next = temp.next.next;
        }
         //printing the resulting
         list.print();
    }
}
