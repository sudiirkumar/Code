#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        printf("A");
    }
    else if(b>c){
        printf("B");
    }
    else{
        printf("C");
    }
    return 0;
}