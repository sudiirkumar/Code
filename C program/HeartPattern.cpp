#include<stdio.h>
int main(){
    for(int i=5;i>=1;i-=2){
        for(int j=0;j<i/2;j++){
            printf("  ");
        }
        for(int j=0;j<10-i;j++){
            printf("* ");
        }
        for(int j=0;j<i;j++){
            printf("  ");
        }
        for(int j=0;j<10-i;j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("* * * * a m i t  b h a r t i * * * *\n");
    for(int i=0;i<9;i++){
        for(int j=0;j<=i;j++){
            printf("  ");
        }
        for(int j=0;j<18-((2*i) + 1);j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}