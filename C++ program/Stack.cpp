#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Stack{
    vector<int> v;
public:
    void push(int data){
        v.push_back(data);
    }
    void pop(){
        if(empty()){
            return;
        }
        v.pop_back();
    }
    int top(){
        int idx = v.size()-1;
        return v[idx];
    }
    bool empty(){
        if(v.size()==0){
            return true;
        }
        return false;
    }
    void push_at_bottom(int data){
        Stack temp;
        while(!empty()){
            temp.push(top());
            pop();
        }
        push(data);
        while(!temp.empty()){
            push(temp.top());
            temp.pop();
        }
    }
};
int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push_at_bottom(-1);
    st.push_at_bottom(0);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}