/*
        *
      * *
    *   *
  * * * *
*/
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        // for(int j=0;i+j<n-1;j++){
        //     printf("  ");
        // }
        // for(int j=0;j<i+1;j++){
        //     if(i==n-1){
        //         printf("* ");
        //     }
        //     else if(j==0||j==i){
        //         printf("* ");
        //     }
        //     else{
        //         printf("  ");
        //     }
        // }
        for(int j=0;j<n;j++){
            if(i+j>=n-1){
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