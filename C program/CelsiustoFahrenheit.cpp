#include<stdio.h>
int main(){
    int celsius;
    printf("Enter temperature in celsius: ");
    scanf("%d",&celsius);
    int f = (celsius * 9/5) + 32;
    printf("Temperature in Fahrenheit: %d",f);
    return 0;
}