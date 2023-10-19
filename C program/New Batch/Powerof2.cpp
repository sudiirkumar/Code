#include<stdio.h>
int main(){
    int n;
    int num;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    printf("Enter base: ");
    scanf("%d",&num);
    for(int i=1,term = num;i<=n;i++,term = term*num){
        printf("%d ",term);
    }
    return 0;
}