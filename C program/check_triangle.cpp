#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value : ");
    scanf("%d%d%d",&a,&b,&c);
    if ((a+b>c) && (b+c>a) && (c+a>b))
    {
        //printf("It is a valid triangle.");
        if(a==b&&b==c){
            printf("Equilateral triangle");
        }   
        else if(a==b||b==c||c==a){
            printf("Isosceles triangle");
        }
        else{
            printf("Scalene triangle");
        }
    }
    else {
        printf("It is not valid triangle.");
    }
    return 0;  
}
