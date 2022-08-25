#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[6][6]={{'.','#','#','.','.','.'},
                  {'#','.','.','#','#','.'},
                  {'.','#','.','.','.','.'},
                  {'.','#','#','.','.','#'},
                  {'#','.','.','#','#','.'},
                  {'.','#','.','.','.','.'}};
    int b[6][6]={0};
    if(a[0][0]=='#')//for 0,0 element
        b[0][0]=1;
    for(int i=1;i<6;i++){//storing prefix sum for first row
        if(a[0][i]=='#')
            b[0][i]=b[0][i-1]+1;
        else
            b[0][i]=b[0][i-1];
    }
    for(int i=1;i<6;i++){//storing prefix sum for first col
        if(a[i][0]=='#')
            b[i][0]=b[i-1][0]+1;
        else
            b[i][0]=b[i-1][0];
    }
    for(int i=1;i<6;i++){//storing all left prefix sums
        for(int j=1;j<6;j++){
            if(a[i][j]=='#')
                b[i][j]=1+b[i-1][j]+b[i][j-1]-b[i-1][j-1];
            else
                b[i][j]=0+b[i-1][j]+b[i][j-1]-b[i-1][j-1];
        }
    }
    int minm=INT_MAX;
    int maxm=INT_MIN;
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            int s1,s2,s3,s4,last_min;
            s1=b[i][j];
            s2=b[i][5]-s1;
            s3=b[5][j]-s1;
            s4=b[5][5]-s1-s2-s3;
            minm=(s1<s2 and s1<s3 and s1<s4)?s1:(s2<s3 and s2<s4)?s2:(s3<s4)?s3:s4;
            maxm=max(minm,maxm);
        }
    }
    cout<<maxm<<endl;
    return 0;
}