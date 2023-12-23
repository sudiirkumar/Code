#include<iostream>
using namespace std;
int reverse(int p){
    int rev = 0;
    int ldig;
    while(p>0){
        ldig = p%10;
        rev = rev*10 + ldig;
        p = p/10;
    }
    return rev;
}
bool isPalindrome(int num){
    if(num>=0 and num<=9){
        return true;
    }
    // if(num==reverse(num)){
    //     return true;
    // }
    // else{
    //     return false;
    // }
    return (num==reverse(num));
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(isPalindrome(num)){
        cout<<"Palindrome number";
    }
    else{
        cout<<"Non Palindrome number";
    }
    return 0;
}