#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {12,-3,-5,34,0,-4,45,10};
    int maxm1 = INT_MIN;
    int maxm2 = INT_MIN;
    for(int num : arr){
        if(num>maxm1){
            maxm2 = maxm1;
            maxm1 = num;
        }
        else if(num>maxm2 and num!=maxm1){
            maxm2 = num;
        }
    }
    cout<<"Largest element: "<<maxm1<<endl;
    cout<<"Second largest element: "<<maxm2<<endl;
    return 0;
}