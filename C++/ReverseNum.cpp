#include<iostream>
using namespace std;
int revNum(int num){
    int rev = 0;
    int temp;
    while(num>0){
        temp = num%10;
        rev = rev*10 + temp;
        num/=10;
    }
    return rev;
}
int main(){
    int n;
    printf("Enter a number to reverse : ");
    scanf("%d",&n);
    printf("\nReverse number : %d",revNum(n));
    return 0;
}