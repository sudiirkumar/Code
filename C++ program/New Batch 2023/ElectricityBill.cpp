#include<iostream>
using namespace std;
int main(){
    // 3.5 rs / unit  100,120,150    5%
    int bill_1;
    int bill_2;
    int bill_3;
    cout<<"Enter bill of 3 months: ";
    cin>>bill_1>>bill_2>>bill_3;
    int total_bill = bill_1+bill_2+bill_3;
    int total = total_bill * 3.5;
    cout<<"Total bill amount: "<<total<<endl;
    // Part 2
    int bill_amount_1 = bill_1*3.5;//350
    bill_amount_1 = (bill_amount_1 * 105/100)*105/100;
    int bill_amount_2 = bill_2 * 3.5;
    bill_amount_2 = bill_amount_2 * 105/100;
    int bill_amount_3 = bill_3 * 3.5;
    total = bill_amount_1 + bill_amount_2 + bill_amount_3;
    cout<<"Total bill amount after fine: "<<total<<endl;
    return 0;
}