#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int count=0;
    int sum=0;
    printf("The prime numbers between 1 and %d are : \n",num);
    for(int n=2;n<=num;n++){
        int isPrime=1;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime==1){
            printf("%d ",n);
            sum = sum + n;
            count++;
        }
    }
    printf("\nNumber of prime numbers: %d",count);
    printf("\nSum of prime numbers is: %d",sum);
    return 0;
}