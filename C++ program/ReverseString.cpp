#include<iostream>
using namespace std;
int strlen(char arr[]){
    int len=0;
    for(int i=0;arr[i]!='\0';i++){
        len++;
    }
    return len;
}
int main(){
    char word[20];
    cout<<"Enter a word: ";
    cin>>word;
    cout<<"Word: "<<word<<endl;
    //Reverse
    int len = strlen(word);
    // int i=0;
    // int j=len-1;
    // while(i<j){
    //     swap(word[i],word[j]);
    //     i++;
    //     j--;
    // }
    for(int i=0, j=len-1;i<j;i++,j--){
        swap(word[i],word[j]);
    }
    cout<<"Reversed word: "<<word<<endl;
    return 0;
}