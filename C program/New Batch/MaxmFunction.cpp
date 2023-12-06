#include<stdio.h>
int max(int p,int q){
    // if(a>b){
    //     return a;
    // }
    // return b;
    return (p>q?p:q);
}
int main(){
    int a = 120;
    int b = 150;
    int c = 100;
    int maxm = max(a,max(b,c));
    printf("Maxm value: %d",maxm);
    return 0;
}