#include<stdio.h>
#include<math.h>
int main(){
    int num;
    int count=0;
    int sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("\nPrime numbers between 1 to %d are:\n",num);
    for(int n=2;n<=num;n++){
        int i;
        for(i=2;i<=sqrt(n);i++){
            if(n%i==0){
                break;
            }
        }
        if(i>sqrt(n)){
            printf("%d ",n);
            sum = sum + n;
            count++;
        }
    }
    printf("\n\nNumber of prime numbers: %d",count);
    printf("\nSum of prime numbers: %d",sum);
    return 0;
}