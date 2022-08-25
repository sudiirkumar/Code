#include<iostream>
using namespace std;
int main(){
    int a[4][4]={{12,23,34,45},
                 {14,25,36,47},
                 {16,27,38,49},
                 {18,28,39,50}};
    int key;
    cin>>key;
    
    int row=0;
    int col=3;
    int curr=a[row][col];
    while(curr!=key and row<4 and col>=0){
        if(curr>key){
            col--;
        }
        if(curr<key){
            row++;
        }
        curr=a[row][col];
    }
    if(curr==key)
        cout<<row<<" , "<<col<<endl;
    else
        cout<<"Key not found"<<endl;
    return 0;
}