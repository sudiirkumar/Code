import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String username;
        String password;
        User[] users = new User[3];
        users[0] = new User("Aman",1000,"aman1234");
        users[1] = new User("Raman",5000,"raman1234");
        users[2] = new User("Pawan",3000,"pawan1234");

        Cart cart = new Cart();
        cart.addProduct(new Product("Laptop",30000,2000));
        cart.addProduct(new Product("Monitor",15000,500));
        cart.addProduct(new Product("PC",40000,4000));
        cart.addProduct(new Product("Laptop charger",2000,200));
        cart.addProduct(new Product("Keyboard",400,20));

        System.out.println("-----------------Welcome to our shop-----------------");
        System.out.println("Please login first to access");
        System.out.print("\nEnter user name: ");
        username = sc.next();
        System.out.print("\nEnter your password: ");
        password = sc.next();
        int i;
        for(i=0;i<3;i++){
            if(users[i].getUserName().equals(username) && users[i].getPassword().equals(password)){
                break;
            }
        }
        if(i==3){
            System.out.println("Incorrect username or password");
        }
        else{
            cart.setUser(users[i]);
            cart.startShopping();
        }

    }
}