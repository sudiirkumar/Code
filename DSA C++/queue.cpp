#include<iostream>
using namespace std;
class Queue{
    int *arr;
    int cs;
    int ms;
    int front;
    int rear;
public:
    Queue(int max_size){
        ms = max_size;
        arr = new int[ms];
        cs = 0;
        front = 0;
        rear = ms-1;
    }
    bool full(){
        return cs==ms;
    }
    bool empty(){
        return cs==0;
    }
    void push(int data){
        if(!full()){
            rear = (rear+1)%ms;
            arr[rear] = data;
            cs++;
        }
    }
    void pop(){
        if(!empty()){
            front = (front+1)%ms;
            cs--;
        }
    }
    int top(){
        return arr[rear];
    }
    int getFront(){
        return front;
    }
};
int main(){
    Queue q(8);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.pop();
    q.push(9);

    while (!q.empty())
    {
        cout<<q.getFront()<<" ";
        q.pop();
    }
    return 0;
}