#include<stdio.h>
int main(){
    int num;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d",&num);
    int temp = num;
    int digit;
    while(temp>0){
        digit = temp%10;
        switch (digit)
        {
            case 0:
            case 1:
                sum += 1;
                break;
            case 2:
                sum += 2;
                break;
            case 3:
                sum += 6;
                break;
            case 4:
                sum += 24;
                break;
            case 5:
                sum += 120;
                break;
            case 6:
                sum += 720;
                break;
            case 7:
                sum += 5040;
                break;
            case 8:
                sum += 40320;
                break;
            case 9:
                sum += 362880;
                break;
        }
        temp /= 10;
    }
    if(sum==num){
        printf("Strong number");
    }
    else{
        printf("Not an Strong number");
    }
    return 0;
}