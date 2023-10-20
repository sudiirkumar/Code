#include<stdio.h>
#include<conio.h>
    int main(){
    char ch;
    int n;
    do{
        printf("\nEnter a number to find its square: ");
        scanf("%d",&n);
        printf("Square of %d is %d\n",n,n*n);
        printf("Do you want to continue? (Y/N): ");
        ch = getche();
    }
    while(ch=='y'||ch=='Y');
    return 0;
}