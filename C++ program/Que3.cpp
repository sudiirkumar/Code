#include<cmath>
#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    while(num--){
        int x,y,d;
        cin>>x>>y>>d;
        int steps = 0;
        steps += ceil(1.0*x/d);
        // cout<<steps<<" ";
        steps += ceil(1.0*y/d);
        // cout<<steps<<" ";
        steps += abs(ceil(1.0*x/d) - ceil(1.0*y/d));
        // cout<<steps<<" ";
        if(x>y) steps--;
        cout<<steps<<endl;
    }
    return 0;
}