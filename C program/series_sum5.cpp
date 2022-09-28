//x + x*2 + x*3 + x*4 + ...  -> 3, 3*2, 3*3, 3*4... -> 3,6,9,12,...
#include<stdio.h>
int main(){
    int n;
    int x;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    printf("Enter value of x : ");
    scanf("%d",&x);
    int term = x;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += term;
        term = term + x;
    }
    printf("Sum = %d",sum);
}