#include<stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%-2d * %2d = %3d\n",n,i,n*i);
    }
    return 0;
}
// n = 5
// 5 * 1 = 5
// 5 * 2 = 10
// 5 * 3 = 15
// 5 * 4 = 20
// 5 * 5 = 25
// 5 * 6 = 30
