#include<iostream>
#include<cmath>
using namespace std;
int power(int n,int e){
    int ans=1;
    for(int i=0;i<e;i++){
        ans *= n;
    }
    return ans;
}
int main(){
    int num;//12345
    cout<<"Enter a number: ";
    cin>>num;
    
    int ldig = num%10;//5
    int dig = log10(num) + 1;//number of digits = 5
    int fdig = num / power(10,dig-1);//1

    int swapped = ldig * power(10,dig-1);//50000
    swapped = swapped + (((num/10) % (power(10,dig-2)))*10);//50000 + 2340 = 52340
    swapped = swapped + fdig;//52340 + 1 = 52341

    // int swapped = ldig * pow(10,dig-1);
    // swapped = swapped + num%int(pow(10,dig-1));
    // swapped = swapped - ldig;
    // swapped = swapped + fdig;
    
    cout<<"Original number: "<<num<<endl;
    cout<<"Number after swapping digits: "<<swapped<<endl;

    return 0;
}