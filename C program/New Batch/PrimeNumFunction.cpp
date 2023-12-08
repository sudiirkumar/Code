//Given a number, write a function which checks if the number is prime or not.
//The functions take input an integer and returns 1 if the number is prime otherwise 0.
#include<stdio.h>
#include<math.h>
int isPrime(int num){
    if(num==1)
        return 0;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(isPrime(num)){
        printf("Prime number");
    }
    else{
        printf("Non prime number");
    }
    return 0;
}