#include<stdio.h>
int main(){
    int n = 15;
    int* p = &n;
    printf("\n%d",n);
    printf("\n%d",*p);
    (*p) = n+1;
    printf("\n%d",n);
    printf("\n%d",*p);
    printf("\n%d",&n);
    printf("\n%d",p);
    printf("\n%d",&p);
    char c = 'A';
    char *q = &c;
    printf("\n%d",sizeof(p));
    printf("\n%d",sizeof(q));
    return 0;
}