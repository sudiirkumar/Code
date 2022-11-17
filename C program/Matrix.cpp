// Input a matrix and perform these operations:
// 1. Print
// 2. Add
// 3. Average
// 4. Prefix sum
// 5. Diagonal sum
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
    int ch;
    int arr[20][20];
    int sum;
    int row;
    int col;
    do{
        system("cls");
        printf("\n1.Input\n2.Print\n3.Add\n4.Average\n5.Prefix sum\n6.Diagonal sum\n7.Row-wise sum\n8.Column-wise sum\n9.Row-wise greatest and smallest\n10.Column-wise greatest and smallest\n11.Total greatest and smallest\n12.Transpose\n0.Exit\n\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: printf("\nEnter value of row and column: ");
                    scanf("%d%d",&row,&col);
                    for(int i=0;i<row;i++){
                        for(int j=0;j<col;j++){
                            printf("Enter a value (%d,%d) : ",i,j);
                            scanf("%d",&arr[i][j]);
                        }
                    }
                    break;
            case 2: printf("\nElements of the array are: \n");
                    for(int i=0;i<row;i++){
                        for(int j=0;j<col;j++){
                            printf("%3d",arr[i][j]);
                        }
                        printf("\n");
                    }
                    break;
            case 3: sum = 0;
                    for(int i=0;i<row;i++){
                        for(int j=0;j<col;j++){
                            sum += arr[i][j];
                        }
                    }
                    printf("\nSum = %d",sum);
                    break;
            case 4: sum = 0;
                    for(int i=0;i<row;i++){
                        for(int j=0;j<col;j++){
                            sum += arr[i][j];
                        }
                    }
                    printf("\nAverage: %.2f",sum*1.0/(row*col));
                    break;
            case 5: sum = 0;
                    for(int i=0;i<row;i++){
                        for(int j=0;j<col;j++){
                            sum += arr[i][j];
                            printf("%5d",sum);
                        }
                        printf("\n");
                    }
                    break;
            case 6: if(row==col){
                        sum=0;
                        for(int i=0;i<row;i++){
                            sum += arr[i][i];
                        }
                        printf("\nLeft to right diagonal sum: %d",sum);
                        sum=0;
                        for(int i=0;i<row;i++){
                            sum += arr[i][row-i-1];
                        }
                        printf("\nRight to left diagonal sum: %d",sum);
                    }
                    else{
                        printf("\nDiagonal sum is not possible");
                    }
                    break;
            case 12:for(int i=0;i<col;i++){
                        for(int j=0;j<row;j++){
                            printf("%3d",arr[j][i]);
                        }
                        printf("\n");
                    }
                    break;
            case 0: exit(0);
        }
        printf("\nEnter any key to continue...");
        getch();
    }while(1);
    return 0;
}