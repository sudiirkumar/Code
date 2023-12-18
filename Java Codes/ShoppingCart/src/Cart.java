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
}
