#include<stdio.h>
int pow(int b,int e){
    int ans=1;
    for(int i=0;i<e;i++){
        ans *= b;
    }
    return ans;
}
int main(){
    int num;//123 = 1^3 + 2^3 + 3^3 = 
    printf("Enter a number: ");
    scanf("%d",&num);
    int count_dig=0;
    int temp=num;
    while(temp>0){
        count_dig++;
        temp /= 10;
    }
    temp = num;
    int sum=0;
    while(temp>0){
        sum = sum + pow(temp%10,count_dig);
        temp /= 10;
    }
    if(num==sum){
        printf("Number is an Armstrong number");
    }
    else{
        printf("Number is not an Armstrong number");
    }
    return 0;
}