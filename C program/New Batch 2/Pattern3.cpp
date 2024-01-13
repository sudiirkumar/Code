// * * * *
// * * * 
// * * 
// * 
#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}