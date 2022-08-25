#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char string[1000];
    char max[1000]="a";
    int n;
    cout<<"Enter number of strings : ";
    cin>>n;

    for(int i=0;i<n;i++){
        fflush(stdin);
        cout<<"Enter an string : ";
        cin.getline(string,1000);
        if(strlen(string)>strlen(max))
            strcpy(max,string);
    }
    cout<<"Largest String : "<<max<<endl;
    return 0;
}