#include<iostream>
using namespace std;
void print(int a[][4],int m,int n){
    int startRow = 0;
    int lastRow = m-1;
    int startCol = 0;
    int lastCol = n-1;

    while(startRow<=lastRow and startCol<=lastRow){
        for(int col = startCol;col<=lastCol;col++){
            cout<<a[startRow][col]<<" ";
        }
        for(int row = startRow+1;row<=lastRow;row++){
            cout<<a[row][lastCol]<<" ";
        }
        for(int col = lastCol-1;col>=startCol;col--){
            if(startRow==lastRow)
                break;
            cout<<a[lastRow][col]<<" ";
        }
        for(int row = lastRow-1;row>=startRow+1;row--){
            if(startCol==lastCol)
                break;
            cout<<a[row][startCol]<<" ";
        }
        startCol++;
        startRow++;
        lastCol--;
        lastRow--;
    }
}
int main(){
    int a[][4]={{1 , 2, 3, 4},
                {5, 6, 7, 8},
                {9,10,11,12}};
    print(a,3,4);

    return 0;
}