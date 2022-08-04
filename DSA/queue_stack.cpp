#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class Stack{
        queue<int> q1,q2;
    public:
        void push(int data){
            if(!q2.empty()){
                q2.push(data);
            }
            else{
                q1.push(data);
            }
        }
        void pop(){
            if(!q2.empty()){
                while(!q2.empty()){
                    int front = q2.front();
                    q2.pop();
                    if(q2.empty()){
                        break;
                    }
                    q1.push(front);
                }
            }
            else{
                while(!q1.empty()){
                    int front = q1.front();
                    q1.pop();
                    if(q1.empty()){
                        break;
                    }
                    q2.push(front);
                }
            }
        }
        int top(){
            if(!q2.empty()){
                while(!q2.empty()){
                    int front = q2.front();
                    q2.pop();
                    q1.push(front);
                    if(q2.empty()){
                        return front;
                    }
                }
            }
            else{
                while(!q1.empty()){
                    int front = q1.front();
                    q1.pop();
                    q2.push(front);
                    if(q1.empty()){
                        return front;
                    }
                }
            }
        }
        bool empty(){
            return q1.empty() && q2.empty();
        }
    
};
int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}