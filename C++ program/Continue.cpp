//print all the pos numbers between 1 and 100 which are not divisible by 3 
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=100;i++){
        // if(i%3!=0){
        //     cout<<i<<endl;
        // }
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}