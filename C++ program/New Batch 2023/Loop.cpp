#include<iostream>
using namespace std;
int main(){
    //for each loop
    int a[] = {1,2,3,4,5,6,7,8,9,0};
    // int n = sizeof(a)/sizeof(int);
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" ";
    // }
    int sum = 0;
    int even_sum = 0;
    int odd_sum = 0;
    for(int n : a){
        sum += n;
        if(n%2==0){
            even_sum += n;
        }
        else{
            odd_sum += n;
        }
    }
    cout<<"Total sum: "<<sum<<endl;
    cout<<"Even sum: "<<even_sum<<endl;
    cout<<"Odd sum: "<<odd_sum<<endl;

    //Loops
    // for(int i=0;i<10;i++){
    //     cout<<"Hello"<<endl;
    // }
    // int i = 0;
    // while(i<10){
    //     cout<<"Hello"<<endl;
    //     i++;
    // }
    // do{
    //     cout<<"Hello"<<endl;
    //     i++;
    // }
    // while(i>110);
    return 0;
}