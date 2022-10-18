#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("The factors of %d are: \n",num);
    for(int i=1;i<=num;i++){
        if(num%i==0){
            printf("%d ",i);
        }
    }
    printf("\nOut of which, prime factors are : \n",num);
    for(int i=2;i<=num;i++){
        if(num%i==0){
            int isPrime = 1;
            for(int j=2;j<=sqrt(i);j++){
                if(i%j==0){
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime==1){
                printf("%d ",i);
            }
        }
    }
    return 0;
}