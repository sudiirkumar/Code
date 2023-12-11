#include<stdio.h>
int main(){
    int a[5] = {10,20,30,40,50};
    int *p = &a[0];
    printf("%d",a);
    printf("\n%d",a[0]);
    printf("\n%d\n",*a);
    for(int i=0;i<5;i++){
        printf("%d ",p[i]);
    }
    printf("\n");
    for(int i=0;i<5;i++){
        printf("%d ",*(p+i));
    }
    return 0;
}