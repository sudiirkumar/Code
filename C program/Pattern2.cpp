// * * * *
// *     *
// *     *
// * * * *
#include<stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    
    // for(int i=1;i<=n;i++){
    //     if(i==1||i==n){
    //         for(int j=1;j<=n;j++){
    //             printf("* ");
    //         }
    //     }
    //     else{
    //         for(int j=1;j<=n;j++){
    //             if(j==1||j==n){
    //                 printf("* ");
    //             }
    //             else{
    //                 printf("  ");
    //             }
    //         }
    //     }
    //     printf("\n");
    // }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==1||j==n){
                printf("* ");
            }
            else if(i==1||i==n){
                printf("* ");
            }
            else if(i==j||i+j==n+1){
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