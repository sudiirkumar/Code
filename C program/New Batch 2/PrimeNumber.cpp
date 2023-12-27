#include<stdio.h>
#include<math.h>
int main(){
    int num;//10
    printf("Enter a number: ");
    scanf("%d",&num);
    int i;
    for(i=2;i<=sqrt(num);i++){
        if(num%i==0){
            break;
        }
    }
    if(i>sqrt(num)){
        printf("Prime number");
    }
    else{
        printf("Non prime number");
    }
    return 0;
}