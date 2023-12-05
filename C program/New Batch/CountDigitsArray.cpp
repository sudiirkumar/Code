#include<stdio.h>
int main(){
    int num;//10234
    printf("Enter a number: ");
    scanf("%d",&num);
    int count[10] = {0};
    int dig;
    while(num!=0){
        dig = num%10;
        // printf("%d ",dig);
        dig = dig>0 ? dig : (-1)*dig;
        num /= 10;
        count[dig]++;
    }
    for(int i=0;i<10;i++){
        printf("\nCount of %d's: %d",i,count[i]);
    }
    return 0;
}