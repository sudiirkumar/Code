#include<stdio.h>
int main(){
    int a[10];//declaration
    //input
    for(int i=0;i<10;i++){
        printf("Enter a number: ");
        scanf("%d",&a[i]);
    }
    //output
    printf("\nArray contains: \n");
    for(int i=0;i<10;i++){
        if(a[i]%2==0){
            printf("%d ",a[i]);
        }
    }
    return 0;
}