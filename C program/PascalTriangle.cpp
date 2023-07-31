//     1
//    1 1
//   1 2 1
//  1 3 3 1
// (x+y)^0 = 1
// (x+y)^1 = x + y
// (x+y)^2 = x^2 + 2xy + y^2
// (x+y)^3 = x^3 + 3x^2y + 3xy^2 + y^3
#include<stdio.h>
int factorial(int n){
    if(n==0){
        return 1;
    }
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    return fact;
}
int nCr(int n,int r){
    return factorial(n)/(factorial(n-r)*factorial(r));
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("%d ",nCr(i,j));
        }
        printf("\n");
    }
    return 0;
}