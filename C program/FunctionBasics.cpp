#include<stdio.h>
void printHello(){
    printf("Hello\n");
    printf("How are you?\n");
    return;
}
void sum1(){
    int a = 10;
    int b = 15;
    int sum = a+b;
    printf("%d\n",sum);
}
void sum2(int a,int b){
    int sum = a+b;
    printf("Sum: %d\n",sum);
}
int sum3(int a,int b){
    int sum = a+b;
    return sum;
}
int main()
{
    printHello();
    sum1();
    sum2(12,13);
    sum2(234,13);
    sum2(12,23);
    sum2(12,345);
    int n = 2*sum3(100,12);
    printf("%d",n);
    return 0;
}