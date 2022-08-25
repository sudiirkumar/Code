#include<iostream>
#include<ctype.h>
using namespace std;

int main(){
    int no_char = 0 ,no_space = 0, no_digit = 0;
    char arr[1000];
    int i=0;
    do{
        arr[i] = cin.get();
        if(isalpha(arr[i]))
            no_char++;
        else if(isdigit(arr[i]))
                no_digit++;
                else if(isspace(arr[i]))
                    no_space++;
        i++;
    }
    while(arr[i-1]!='\n');
    arr[i] = '\0';

    cout<<arr<<endl;
    cout<<"No of Alphabets : "<<no_char<<"\nNo of Digits : "<<no_digit<<"\nNo of space : "<<no_space-1<<endl;

    return 0;
}