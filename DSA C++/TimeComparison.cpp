#include<bits/stdc++.h>
#include<ctime>
using namespace std;
void bubbleSort(vector<int> &arr,int n){
    for(int i=1;i<n;i++)//the number of times we need to sort
        for(int j=0;j<n-i;j++)//the iteration to take the largest element to the right most
            if(arr[j]>arr[j+1])//check if the number is greater than next element
                swap(arr[j],arr[j+1]);
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n,0);
    //putting values into vector
    for(int i=0;i<n;i++){
        arr[i] = n-i;
    }
    auto start_time = clock();
    //sort(arr.begin(),arr.end());
    bubbleSort(arr,n);
    auto end_time = clock();

    cout<<end_time - start_time<<endl;
    return 0;

}