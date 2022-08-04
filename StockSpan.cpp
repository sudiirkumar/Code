#include<iostream>
#include<stack>
using namespace std;
void calcSpan(int prices[],int n,int span[]){
    stack<int> s;//to store the idx of each day price
    s.push(0);
    span[0] = 1;
    for(int i=1;i<n;i++){
        int currentPrice = prices[i];
        while(!s.empty() and prices[s.top()]<=currentPrice){
            s.pop();
        }
        if(s.empty()){
            span[i] = i+1;
        }
        else{
            int prevIdx = s.top();
            span[i] = i - s.top();
        }
        s.push(i);
    }
}
int main(){
    int prices[] = {12,32,42,21,34,54};
    int n=sizeof(prices)/sizeof(int);
    int span[1000]={0};
    calcSpan(prices,n,span);
    for(int i=0;i<n;i++){
        cout<<span[i]<<" ";
    }

}