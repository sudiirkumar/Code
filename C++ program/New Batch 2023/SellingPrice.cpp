#include<iostream>
using namespace std;
int main(){
    // 30% discount and 10% extra discount
    int marked_price = 500;
    int selling_price = (marked_price * 70/100)*90/100;
    cout<<"Selling price: "<<selling_price<<endl;
    return 0;
}