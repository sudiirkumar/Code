#include<stdio.h>
#include<math.h>
int isPrime(int n){
    if(n==1)
        return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
void printPrime(int s,int e){
    int count=0;
    printf("Prime numbers between %d and %d are: \n",s,e);
    for(int i=s;i<=e;i++){
        if(isPrime(i)){
            count++;
            printf("%d ",i);
        }
    }
    printf("\nNumber of prime numbers between %d and %d: %d",s,e,count);
}
int main(){
    int start, end;
    printf("Enter interval to find prime numbers: ");
    scanf("%d%d",&start,&end);
    printPrime(start,end);
    return 0;
}