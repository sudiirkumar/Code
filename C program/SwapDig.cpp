#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);//1234
    int lastDig = num%10;//4
    int firstDig = 0;
    int digits = (int)log10(num);//3
    firstDig = (int)(num/pow(10,digits));//1
    int ans = 0;
    ans = lastDig*pow(10,digits);//4000
    ans = ans + (num%(int)pow(10,digits));//4000 + 1234 % 1000 = 4000 + 234 = 4234
    ans = ans - lastDig;//4234 - 4 = 4230
    ans = ans + firstDig;//4230 + 1 = 4231
    printf("Before swap: %d",num);
    printf("\nAfter swap: %d",ans);
    return 0;
}