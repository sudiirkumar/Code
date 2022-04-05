#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter "<<n<<" values : \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nPrinting array : \n";
    for(int x : arr){
        cout<<x<<" ";
    }
    return 0;
}