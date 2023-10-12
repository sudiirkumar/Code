#include<iostream>
using namespace std;
class Product{
public:
    string productName;
    unsigned int productPrice;
    float discountPercentage;
    string sellerName;

    Product(string productName,unsigned int productPrice,string sellerName="N/A",float discountPercentage=0){
        this->productName = productName;
        this->productPrice = productPrice;
        this->discountPercentage = discountPercentage;
        this->sellerName = sellerName;
    }
    Product(){}
    void printDetails(){
        cout<<"\n\nProduct name: "<<productName;
        cout<<"\nProduct price: Rs. "<<productPrice;
        cout<<"\nDiscount percentage: "<<discountPercentage<<"%";
        cout<<"\nSelling Price: "<<sellingPrice();
        cout<<"\nSeller name: "<<sellerName;
    }
    unsigned int sellingPrice(){
        // return productPrice-(productPrice*discountPercentage/100);
        return int(productPrice*(100-discountPercentage)/100);
    }
};
int main(){
    Product p1 = Product("Lenovo Laptop",40000,"Lenovo",10.0f);
    p1.printDetails();
    Product p2 = Product("HRX sports shoes",3300,"HRX",5.0f);
    p2.printDetails();
    Product p3 = Product("Samsung Television",100000,"N/A",2.0f);
    p3.printDetails();
    
    return 0;
}