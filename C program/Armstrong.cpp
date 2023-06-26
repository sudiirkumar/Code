#include<stdio.h>
#include<math.h>
int power(int n,int e){
    int ans = 1;
    for(int i=1;i<=e;i++){
        ans *= n;
    }
    return ans;
}
int main(){
    int num;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d",&num);
    int dig = log10(num) + 1;
    int temp = num;
    while(temp>0){
        sum += power(temp%10,dig);
        temp /= 10;
    }
    // printf("Sum = %d",sum);
    if(sum==num){
        printf("Armstrong number");
    }
    else{
        printf("Not an armstrong number");
    }
    return 0;
}