#include<stdio.h>
int pow(int base, int exp){
    int ans = 1;
    for(int i=0;i<exp;i++){
        ans *= base;
    }
    return ans;
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int ldig = num%10;
    int fdig;
    int count = 0;
    int temp = num;

    while(temp>0){
        fdig = temp%10;
        count++;
        temp /= 10;
    }
    printf("\nLast digit: %d",ldig);
    printf("\nFirst digit: %d",fdig);
    int new_num = ldig * pow(10,count-1);
    printf("\n%d",new_num);
    new_num += (num%pow(10,count-1));
    printf("\n%d",new_num);
    new_num -= ldig;
    printf("\n%d",new_num);
    new_num += fdig;
    printf("New number: %d",new_num);
    printf("\nOld number: %d",num);
    return 0;
}