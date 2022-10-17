#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("Enter a number :");
    scanf("%d",&num);
    int isPrime=1;
    // int count=0;
    // for(int i=1;i<=num;i++)
    // {
    //     if (num%i==0){
    //         printf("%d ",i);
    //         count++;
    //     }
    // }
    // if(count==2){
    //     printf("\nPrime");
    // }
    // else{
    //     printf("\nNon-prime");
    // }
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime==1){
        printf("Prime");
    }
    else{
        printf("Non-prime");
    }
    return 0;
}