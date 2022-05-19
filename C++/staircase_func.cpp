#include<iostream>
using namespace std;

pair<int,int> stairCase(int arr[][4],int m,int n,int key){
    if(key<arr[0][0] or key>arr[m-1][n-1])
        return {-1,-1};
    int row=0;
    int col=n-1;
    while(row<m and col>=0){
        if(arr[row][col]==key)
            return {row,col};
        if(arr[row][col]<key)
            row++;
        if(arr[row][col]>key)
            col--;
    }
    return {-1,-1};
}
int main(){
    int a[4][4]={{12,23,34,45},
                 {14,25,36,47},
                 {16,27,38,49},
                 {18,28,39,50}};
    int key;
    cin>>key;
    pair<int,int> answer = stairCase(a,4,4,key);
    cout<<answer.first<<" "<<answer.second<<endl;

    return 0;
}