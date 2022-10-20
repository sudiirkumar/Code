#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    system("cls");
    system("color 05");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            printf("O ");
        }
        printf("\n");
    }
    return 0;
}