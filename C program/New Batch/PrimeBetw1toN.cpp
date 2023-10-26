#include<stdio.h>
int main(){
    int num;
    int sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int n=2;n<=num;n++){
        int i;
        for(i=2;i<n;i++){
            if(n%i==0){
                break;
            }
        }
        if(n==i){
            printf("%d ",n);
            sum += n;
        }
    }
    printf("\nSum of all primes: %d",sum);
    return 0;
}