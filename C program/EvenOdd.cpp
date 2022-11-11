#include<stdio.h>
int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    /*
    METHOD 1:
    int temp=n;
    temp=temp/2;
    temp=temp*2;
    if(n==temp){
        printf("%d is even",n);
    }
    else{
        printf("%d is odd",n);
    }
    */
    if(n&1){
        printf("%d is odd",n);
    }
    else{
        printf("%d is even",n);
    }
    return 0;
}