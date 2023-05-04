#include<stdio.h>
int main(){
    int principal;
    int rate;
    int time;
    principal = 10000;
    rate = 10;
    time = 2;
    int si = (principal*rate*time)/100;
    printf("Simple interest is %d",si);
    return 0;
}