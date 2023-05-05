#include<stdio.h>
int main(){
    int radius;
    radius = 12;
    int diameter = 2*radius;
    float circumference = 3.14 * diameter;
    float area = 3.14 * radius * radius;
    printf("\nDiameter: %d units.",diameter);
    printf("\nCircumference: %.2f units.\nArea: %.2f square units.",circumference,area);
    return 0;
}