#include<iostream>
using namespace std;
class Product{
    int price;
    string name;
public:
    void setPrice(int p){
        price = p;
    }
    void setName(string n){
        name = n;
    }
    string getName(){
        return name;
    }
    int getPrice(){
        return price;
    }
    void giveDiscount(){
        price = (9*price)/10;
    }
};
int main(){
    Product product[5];
    //input
    string name;
    int price;
    for(int i=0;i<5;i++){
        cout<<endl;
        cout<<"Enter name of product: ";
        cin>>name;
        product[i].setName(name);

        cout<<"Enter price of product: ";
        cin>>price;
        product[i].setPrice(price);
    }
    //output
    for(int i=0;i<5;i++){
        cout<<endl;
        cout<<"Name of product: "<<product[i].getName()<<endl;
        product[i].giveDiscount();
        cout<<"Price of product: "<<product[i].getPrice()<<endl;
    }
    return 0;
}