#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if(i==0 or i==num-1 or j==0 or j==num-1){
                if(!((i==0 or i==num-1) && (j==0 or j==num-1)))
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