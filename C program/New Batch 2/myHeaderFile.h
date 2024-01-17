#include<stdio.h>
#include<math.h>
int isPrime(int n){
    if(n<2)    return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
void primeIn(int a,int b){
    if(a>b){
        int temp = a;
        a = b;
        b = temp;
    }
    int count = 0;
    printf("\nPrime number between %d and %d are: \n",a,b);
    for(int i=a;i<=b;i++){
        if(isPrime(i)){
            printf("%d ",i);
            count++;
        }
    }
    printf("\nNumber of prime numbers: %d",count);
}