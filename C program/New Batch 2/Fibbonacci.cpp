#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int a = 0, b = 1;
    int c;
    for(int i=0;i<num;i++){
        printf("%d ",a);
        c = a+b;
        a = b;
        b = c;
    }
    return 0;
}