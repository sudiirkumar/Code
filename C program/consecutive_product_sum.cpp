//Write a C program, That reads list of n integer and print sum of product of 
// consecutive numbers.
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter number of input : ");
    scanf("%d",&n);
    int sum = 0;
    int currTerm;
    int lastTerm;
    printf("Enter a number : ");
    scanf("%d",&currTerm);
    for(i=1;i<n;i++){
        lastTerm = currTerm;
        printf("Enter a number : ");
        scanf("%d",&currTerm);
        sum = sum + lastTerm*currTerm;
    }
    printf("Sum = %d",sum);
    return 0;
}