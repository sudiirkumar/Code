public class PalindromeCheck extends LL {
    public static void main(String[] args) {
        //init list
        LL list = new LL();   
        list.addLast(1);
        list.addLast(2);
        list.addLast(3);
        list.addLast(3);
        list.addLast(2);
        list.addLast(1);
        list.print();
        //checking palindrome
        boolean found = true;
        Node middle = list.middle();
        Node secondHead = list.reverseRec(middle.next);
        Node firstHead = list.head;
        while(secondHead!=null){
            if(secondHead.value!=firstHead.value){
                found = false;
                break;
            }
            secondHead = secondHead.next;
            firstHead = firstHead.next;
        }
        if(found){
            System.out.println("It is a palindromic list");
        }
        else{
            System.out.println("It is not a palindromic list");
        }
    }
}
