#include<iostream>
using namespace std;
int main(){
    char name[20];
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Hello "<<name<<endl;
    int len = 0;
    for(int i=0;name[i]!='\0';i++)
        len++;
    
    // int i=0;
    // do{
    //     len++;
    //     i++;
    // }while(name[i]!='\0');
    
    cout<<"Length of string is: "<<len<<endl;
    return 0;
}