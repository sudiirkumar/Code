public class Product {
    private String productName;
    private int price;
    private int discount;

    public Product() {
    }
    public Product(String productName, int price, int discount) {
        this.productName = productName;
        this.price = price;
        this.discount = discount;
    }

    public String getProductName() {
        return productName;
    }

    public void setProductName(String productName) {
        this.productName = productName;
    }

    public int getPrice() {
        return price;
    }

    public void setPrice(int price) {
        this.price = price;
    }

    public int getDiscount() {
        return discount;
    }

    public void setDiscount(int discount) {
        this.discount = discount;
    }

    @Override
    public String toString() {
        return productName+ "\t" + price +"\t" + discount+"\n";
    }
}
