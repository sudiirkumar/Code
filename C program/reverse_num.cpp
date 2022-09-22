#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);//n=5
    for(int i=n;i>=1;i--){//i=5 4 3 2 1 0
        printf("%d ",i);// 5 4 3 2 1
    }
    return 0;
}