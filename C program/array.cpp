// prime log_rev 
#include<stdio.h>
void read(int a[],int *n){
    printf("Enter number of inputs : ");
    scanf("%d",n);//100
        for(int i=0;i<*n;i++){
        printf("Enter a number : ");
        scanf("%d",&a[i]);
    }
}
void print(int a[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
void log_rev(int a[],int n){//0 1 2 3 4
    for(int i=n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
}
int main(){
    int a[100];//1 2 3 4
    int n;// 100
    read(a,&n);//pass by value passes only the value inside the variable
    // printf("N = %d",n);
    print(a,n);
    printf("\n");
    log_rev(a,n);
    return 0;
}