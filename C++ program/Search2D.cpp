#include<iostream>
using namespace std;
bool search(int a[4][4],int key){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(a[i][j]==key){
                return 1;
            }
        }
    }
    return 0;
}
bool binSearch(int a[4][4],int key){
    
}
int main(){
    int a[4][4] = { {1 ,2 ,3 ,4},
                    {-3,5 ,8, 1},
                    {2,12,56,23},
                    {-5,6,23,12}
                    };
    int key;
    cin>>key;
    cout<<(search(a,key)?"Found":"Not found");

    return 0;
}