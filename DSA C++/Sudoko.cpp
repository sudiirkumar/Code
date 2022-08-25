#include<iostream>
using namespace std;
bool isSafe(int a[9][9],int i,int j,int n){
    for(int x=0;x<9;x++){
        if(a[x][j]==n or a[i][x]==n){
            return false;
        }
    }
    int sx = (i/3)*3;
    int sy = (j/3)*3;
    for(int x=sx;x<sx+3;x++){
        for(int y=sy;y<sy+3;y++){
            if(a[x][y]==n){
                return false;
            }
        }
    }
    return true;
}
bool sudSolver(int a[9][9],int i,int j){
    if(i==9){
        return true;
    }
    if(j==9){
        return sudSolver(a,i+1,0);
    }
    if(a[i][j]!=0){
        return sudSolver(a,i,j+1);
    }
    for(int no=1;no<=9;no++){
        if(isSafe(a,i,j,no)){
            a[i][j] = no;
            bool subProblem = sudSolver(a,i,j+1);
            if(subProblem){
                return true;
            }
        }
    }
    a[i][j] = 0;
    return false;
}
int main(){
    int sud[9][9]={
                {5,3,0,0,7,0,0,0,0},
                {6,0,0,1,9,5,0,0,0},
                {0,9,8,0,0,0,0,6,0},
                {8,0,0,0,6,0,0,0,3},
                {4,0,0,8,0,3,0,0,1},
                {7,0,0,0,2,0,0,0,6},
                {0,6,0,0,0,0,2,8,0},
                {0,0,0,4,1,9,0,0,5},
                {0,0,0,0,8,0,0,7,9}
                };
    if(!sudSolver(sud,0,0)){
        cout<<"No solution"<<endl;
    }
    else{
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                cout<<sud[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return true;
}