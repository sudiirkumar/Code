#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    /*
    4 x 1 = 4 -> n x i = (n*i)
    4 x 2 = 8 
    .
    .
    4 x 10 = 40
    */
    int i=1;
    while(i<=10){
        printf("\n%d x %d = %d",n,i,n*i);
        i++;
    }
    return 0;
}