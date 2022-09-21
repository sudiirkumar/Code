//print all even numbers from 1 to n
#include<stdio.h>
int main(){
    int i,n;//loop variable
    printf("Enter a number : ");
    scanf("%d",&n);//n=10
    for(i=1;i<=n;i++){
        if(i%2==0){
            printf("%d ",i);//2 4 6 8 10
        }
    }
    return 0;
}