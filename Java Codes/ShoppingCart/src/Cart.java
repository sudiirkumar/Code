import java.util.Scanner;

public class Cart {
    private User user;
    private int totalAmount;
    private Product[] products;
    private int noOfProducts;

    public Cart(User user, int totalAmount, Product[] products) {
        this.user = user;
        this.totalAmount = totalAmount;
        this.products = products;
    }
    public Cart() {
        totalAmount = 0;
        products = new Product[10];
        noOfProducts = 0;
    }

    public User getUser() {
        return user;
    }

    public void setUser(User user) {
        this.user = user;
    }

    public int getTotalAmount() {
        return totalAmount;
    }

    public void setTotalAmount(int totalAmount) {
        this.totalAmount = totalAmount;
    }
    public Product getProduct(int i){
        return products[i];
    }

    public void addProduct(Product product) {
        products[noOfProducts++] = product;
    }
    public void startShopping(){
        char ch;
        int n;
        int quan;
        int totalDiscount = 0;
        Scanner sc = new Scanner(System.in);
        do{
            System.out.println("Select any of those products: ");
            for(int i=0;i<noOfProducts;i++){
                System.out.print((i+1)+". ");
                System.out.println(products[i]);
            }
            System.out.println("Choose a product: ");
            n = sc.nextInt();
            System.out.println("Enter quantity: ");
            quan = sc.nextInt();
            totalAmount = totalAmount + products[n-1].getPrice()*quan;
            totalDiscount = totalDiscount + products[n-1].getDiscount()*quan;
            System.out.println("Do you want to shop more?(Y/N): ");
            ch = sc.next().charAt(0);
        }
        while(ch=='y' || ch=='Y');
        System.out.println("----------Final page--------------");
        System.out.println("Your balance: "+user.getBalance());
        System.out.println("Total amount: "+totalAmount);
        System.out.println("Discount: "+totalDiscount);
        System.out.println("Actual amount: "+(totalAmount-totalDiscount));
        System.out.println("\nDo you want to confirm: ");
        ch = sc.next().charAt(0);
        if(ch=='y' || ch=='Y'){
            if((totalAmount-totalDiscount)<=user.getBalance()){
                user.setBalance(user.getBalance()-(totalAmount-totalDiscount));
                System.out.println("Order placed successfully");
                System.out.println("Balance: "+user.getBalance());
            }
            else{
                System.out.println("Your balance is low");
                System.out.println("Please add balance");
            }
        }
        else{
            System.out.println("Order not placed");
        }
    }
}
