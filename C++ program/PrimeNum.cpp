#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;//10
    int sum=0;
    cout<<"Prime numbers are: ";
    for(int n=1 ; n<=num ; n++){// n = 1 2 3 4 5 6 7 8 9 10
        if(n==1){
            continue;
        }
        int i;
        for(i=2;i<n;i++){
            if(n%i==0){
                break;
            }
        }
        if(i==n){
            //prime number
            cout<<n<<" ";
            sum = sum + n;
        }
    }
    cout<<"\nSum of all prime numbers: "<<sum<<endl;
    return 0;
}