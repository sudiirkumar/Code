#include<stdio.h>
int main(){
    int f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%d",&f);
    int celsius = (f - 32)*5/9;// int celsius = (f - 32)*5/9
    printf("Temperature in Celsius: %d",celsius);
    return 0;
}