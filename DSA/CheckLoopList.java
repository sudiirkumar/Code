public class CheckLoopList extends LL{
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
        //check loop
        boolean ans=false;
        Node fast = list.head;
        Node slow = list.head;
        while(fast!=null &&fast.next!=null){
            fast = fast.next.next;
            slow = slow.next;
            if(fast==slow){
                ans = true;
                break;
            }
        }
        if(ans){
            System.out.println("The list contains a loop");
        }
        else{
            System.out.println("The list doesn't contain a loop");
        }
    }
}
