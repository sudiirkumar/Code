//12344522 -> Number of 1 : 1   Number of 2: 3 ... Number of 0 : 0
#include<stdio.h>
int main(){
    int count[10]={0};    
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    int digit;
    while(num!=0){
        digit = num%10;
        count[digit]++;
        num /= 10;
    }
    for(int i=0;i<10;i++){
        printf("\nNumber of %d's : %d",i,count[i]);
    }
    return 0;
}