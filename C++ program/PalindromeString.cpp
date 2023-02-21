#include<iostream>
using namespace std;
int strlen(char arr[]){
    int len=0;
    for(int i=0;arr[i]!='\0';i++){
        len++;
    }
    return len;
}
void strrev(char a[]){
    int len = strlen(a);
    for(int i=0, j=len-1;i<j;i++,j--){
        swap(a[i],a[j]);
    }
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
void strcpy(char a[],char b[]){
    int len = strlen(a);
    for(int i=0;i<=len;i++){
        a[i] = b[i];
    }
}
int main(){
    char a[20];
    cout<<"Enter a word: ";
    cin>>a;
    int len = strlen(a);
    char temp[20];
    strcpy(temp,a);
    strrev(a);
    // if(equals(a,temp)){
    //     cout<<"Palindrome"<<endl;
    // }
    // else{
    //     cout<<"Not palindrome"<<endl;
    // }
    cout<<(equals(a,temp)?"Palindrome":"Not palindrome")<<endl;
    return 0;
}