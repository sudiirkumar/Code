#include<stdio.h>
int main(){
    int num=1;
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=0;num<=n;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}