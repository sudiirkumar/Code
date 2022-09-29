#include<stdio.h>
int main(){
    /*
        do while -> Exit controlled loop
    */
    int i=1;//init
    int n;
    int sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    do{//i = 1, 2, 3, 4, 5, ... , 10
        if(i%2==0){
            printf("%d ",i);
            sum += i;
        }
        i++;
    }
    while(i<=n);//condition
    printf("Sum = %d",sum);
    return 0;
}