#include<climits>
#include<iostream>
using namespace std;
int main(){
    int arr[] = {12,-3,-5,34,0,-4,45,10};
    int maxm1,maxm2,maxm3;
    maxm3 = maxm2 = maxm1 = INT_MIN;
    for(int num : arr){
        if(num>maxm1){
            maxm3 = maxm2;
            maxm2 = maxm1;
            maxm1 = num;
        }
        else if(num>maxm2 and num!=maxm1){
            maxm3 = maxm2;
            maxm2 = num;
        }
        else if(num>maxm3 and num!=maxm2 and num!=maxm1){
            maxm3 = num;
        }
    }
    cout<<"Largest element: "<<maxm1<<endl;
    cout<<"Second largest element: "<<maxm2<<endl;
    cout<<"Third largest element: "<<maxm3<<endl;
    return 0;
}