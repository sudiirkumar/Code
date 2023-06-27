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
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Armstrong numbers between 1 and %d are: \n",n);
    for(int num = 1;num <= n;num++){
        int no_of_dig = log10(num) + 1;
        int sum = 0;
        int temp = num;
        while(temp!=0){
            int digit = temp%10;
            sum += power(digit,no_of_dig);
            temp /= 10;
        }
        if(sum == num){
            printf("%d ",num);
        }
    }
    return 0;
}