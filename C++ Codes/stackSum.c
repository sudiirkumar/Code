#include<stdio.h>
#include<conio.h>
#include"stack.h"
int main(){
    int len1,len2;
    int i;
    stack num1,num2;
    num1.top = num2.top = -1;
    int input;
    printf("\nEnter length of first number : ");
    scanf("%d",&len1);
    printf("\nEnter first number : ");
    for(i=0;i<len1;i++){
        input = getche();
        push(input,&num1);
    }
    printf("\nEnter length of second number : ");
    scanf("%d",&len2);
    printf("\nEnter second number : ");
    for(i=0;i<len2;i++){
        input = ;
        push(input,&num2);
    }
    // char ans[100];
    // int max_len = len1>len2?len1:len2;
    // int sum,carry=0;
    // printf("\n%d\n",max_len);
    // for(i=max_len;i>0;i--){
    //     sum = (int)(pop(&num1)) + (int)(pop(&num2));
        
    //     sum += carry;
    //     carry = sum/10;
    //     sum %= 10;
    //     ans[i] = (char)(sum);
    // }
    // ans[0] = carry;
    // printf("\nAnswer : ");
    // for(i=0;i<=max_len;i++){
    //     printf("%c",ans[i]);
    // }
    for(i=0;i<=len1;i++){
        printf("%d ",pop(&num1));
    }
    return 0;
}
