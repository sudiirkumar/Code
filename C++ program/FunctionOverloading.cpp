#include<iostream>
#include<cmath>
using namespace std;
int max(int a,int b,int c){
    return max(a,max(b,c));
}

int main(){
    int a = 10;
    int b = 5;
    int c = 20;
    
    return 0;
}