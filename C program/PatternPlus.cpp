#include<stdio.h>
int main(){
    int num;
    printf("Enter an odd number: ");
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if(i==num/2 or j==num/2){
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