#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    while (num--)
    {
        int n,k;
        cin>>n>>k;
        if(n==2){
            cout<<1<<endl;
            continue;
        }
        int sum = n*(n-1)/2;
        sum += n*k;
        cout<<sum<<" ";
        int temp = 0;
        for(int i=k;i<=n+k-1;i++){
            if((temp+i)<sum/2){
                temp += i;
            }
            else{
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}