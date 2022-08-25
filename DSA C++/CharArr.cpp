#include<iostream>
using namespace std;
int main(){
    //initialising char array using normal array method
    char arr[] = {'a','e','i','o','u','\0'};
    //printing arr
    cout<<arr<<endl;
    //initialising char array using "" method
    char arr2[] = "AEIOU";
    //printing arr2
    cout<<arr2<<endl;
    return 0;
}