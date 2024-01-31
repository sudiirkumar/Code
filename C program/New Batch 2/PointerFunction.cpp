#include<stdio.h>
int sum(int *a, int *b){
    return *a + *b;
}
void swap(int *p, int *q){
    int t = *p;
    *p = *q;
    *q = t;
}
void input_arr(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("\nEnter a value: ");
        scanf("%d",arr+i);
    }
}
void output_arr(int *arr, int n){
    printf("\nElements of array: \n");
    for(int i=0;i<n;i++){
        printf("%d ",*(arr+i));
    }
}
void arrcpy(int *a, int *b, int n){
    for(int i=0;i<n;i++){
        *(b+i) = *(a+i);
    }
}
void swap_arr(int *a, int *b, int n){
    for(int i=0;i<n;i++){
        swap(a+i,b+i);
    }
}
int main(){
    int a[10];
    int b[10];
    input_arr(a,5);
    input_arr(b,5);
    swap_arr(a,b,5);
    output_arr(a,5);
    output_arr(b,5);
    // int a = 10, b = 34;
    // printf("\n%d %d",a,b);
    // swap(&a,&b);
    // printf("\n%d %d",a,b);
    return 0;
}