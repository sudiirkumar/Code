#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Prime factors are: \n");
    for(int i=2;i<=num;i++){
        if(num%i==0){
            int j;
            for(j=2;j<i;j++){
                if(i%j==0){
                    break;
                }
            }
            if(j==i){
                printf("%d ",i);
            }
        }
    }
    return 0;
}