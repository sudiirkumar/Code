#include<iostream>
using namespace std;
int main(){
    char arr[1000];
    int i = 0;
    do{
        arr[i++] = cin.get();//each letter we type gets stored into the array one by one till we hit an enter
    }
    while(arr[i-1]!='\n');
    arr[i] = '\0';
    cout<<arr<<endl;

    return 0;
}