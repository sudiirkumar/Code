#include<stdio.h>
int main ()
{
    int a,b;
    printf("enter two number a,b : ");
    scanf("%d%d",&a,&b);//a=10 b=5
    printf("Before swap\n");
    printf("a = %d b = %d\n",a,b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("After swap\n");
    printf("a = %d b = %d",a,b);//a=5 b=10p
    return 0;
}