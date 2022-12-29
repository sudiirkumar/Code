#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int sum = 0;
    int product = 1;
    while(num!=0){
        int dig = num%10;
        cout<<dig<<endl;
        sum += dig;//sum = sum+dig
        product *= dig;
        num = num/10;
    }
    cout<<"Sum of digits: "<<sum<<endl;
    cout<<"Product of digits: "<<product<<endl;
    return 0;
}