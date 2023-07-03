#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if(i==j or i+j==num-1){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}