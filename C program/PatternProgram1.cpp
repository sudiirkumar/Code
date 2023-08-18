// * * * * 
// * * * * 
// * * * * 
// * * * *
#include<stdio.h>
int main(){
    int n;
    printf("Enter size of the square: ");
    scanf("%d",&n);
    //rows - n, col - n
    for(int i=0;i<n;i++){//Rows
        for(int j=0;j<n;j++){//Column
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}