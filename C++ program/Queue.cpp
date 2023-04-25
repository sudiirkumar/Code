#include<iostream>
#include<queue>
using namespace std;
class Queue;
class Node{
    int data;
    Node *next;
public:
    Node(int data){
        this->data = data;
        next = NULL;
    }
    friend class Queue;
};
class Queue{
    Node *head;
    Node *tail;
    int cs;
public:
    Queue(){
        head = tail = NULL;
        cs = 0;
    }
    bool empty(){
        return head==NULL;
    }
    void push(int data){
        Node *new_node = new Node(data);
        if(empty()){
            head = tail = new_node;
        }
        else{
            tail->next = new_node;
            tail = new_node;
        }
        cs++;
    }
    void pop(){
        if(!empty()){
            Node *temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
            cs--;
        }
    }
    int front(){
        if(!empty()){
            return head->data;
        }
    }
    int size(){
        return cs;
    }
};
int main(){
    queue<int> queue;
    queue.push(10);
    queue.push(20);
    queue.push(30);
    queue.push(40);
    queue.push(50);
    queue.pop();
    queue.pop();
    while(!queue.empty()){
        cout<<queue.front()<<" ";
        queue.pop();
    }
    return 0;
}