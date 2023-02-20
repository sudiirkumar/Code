#include<iostream>
using namespace std;
int strlen(char arr[]){
    int len=0;
    for(int i=0;arr[i]!='\0';i++){
        len++;
    }
    return len;
}
bool equals(char a[],char b[]){
    if(strlen(a)!=strlen(b)){
        return false;
    }
    int len = strlen(a);
    for(int i=0;i<len;i++){
        if(a[i]!=b[i]){
            return false;
        }
    }
    return true;
}
int main(){
    char a[10];
    char b[10];
    cout<<"Enter two words: ";
    cin>>a>>b;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<(equals(a,b)?"Same":"Not same");
    return 0;
}