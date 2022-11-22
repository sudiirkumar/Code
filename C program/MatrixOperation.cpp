#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[10][10],b[10][10],c[10][10];
    int ch;
    int row1,col1;
    int row2,col2;
    do{
        system("cls");
        printf("\n1.Input\n2.Display\n3.Addition\n4.Subtraction\n5.Multiplication\n0.Exit\n\nPlease enter your choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("\nEnter number of rows and columns of first matrix: ");

            break;
        
        default:
            break;
        }
    }
    while(1);
    return 0;
}