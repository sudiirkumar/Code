#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int i;
    for(i=1;i<=sqrt(num);i++){
        if(num%i==0){
            printf("%d %d ",i,num/i);
        }
    }
    return 0;
}