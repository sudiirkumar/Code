#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int count=0;
    int sum=0;
    printf("The prime numbers between 1 and %d are : \n",num);
    for(int i=2;i<=num;i++){
        int isPrime=1;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime==1){
            printf("%d ",i);
            sum = sum + i;
            count++;
        }
    }
    printf("\nNumber of prime numbers: %d",count);
    printf("\nSum of prime numbers is: %d",sum);
    return 0;
}