#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter a, b and c for a quadratic equation: ");
    scanf("%d%d%d",&a,&b,&c);
    int d = (b*b) - (4*a*c);
    float x;
    if(d<0){
        printf("\nNo real roots");
    }
    else if(d==0){
        x = -b/(2*a);
        printf("\nEqual roots: %.2f",x);
    }
    else{
        printf("\nDistinct real roots: ");
        x = (-b + sqrt(d))/(2*a);
        printf("%.2f ",x);
        x = (-b - sqrt(d))/(2*a);
        printf("and %.2f ",x);
    }
    return 0;
}