#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter an even number between 4 and 50000 : ";
    cin>>n;
    if(n%2==0&&n>=4&&n<=50000){
        unsigned int i=0;
        unsigned int prime[n>5133?5133:n]={0};
        unsigned int k=0;
        bool flag=true;
        for(i=2;i<n;i++){
            flag=true;
            for(int j=2;j<=sqrt(i);j++){
                if(i%j==0){
                    flag=false;
                    break;
                }
            }
            if(flag){
                prime[k]=i;
                k++;
            }
        }
        for(i=0;i<k;i++){
            for(int j=i;j<k;j++){
                if(prime[i]+prime[j]==n){
                    cout<<prime[i]<<" + "<<prime[j]<<" = "<<n<<endl;
                }
            }
        }
    }
    else
        cout<<"Please enter a valid number."<<endl;
    return 0;
}