#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &s,int data){
    if(s.empty()){
        s.push(data);
        return;
    }
    int temp=s.top();
    s.pop();
    insertAtBottom(s,data);
    s.push(temp);
}
void reverse(stack<int> &s){
    if(s.empty()){
        return;
    }
    int t=s.top();
    s.pop();
    reverse(s);
    insertAtBottom(s,t);
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    reverse(s);
    cout<<"After reverse : \n";
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}