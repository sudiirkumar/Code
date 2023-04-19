#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(){}
    Node(int data){
        this->data = data;
        next = NULL;
    }
};
class LinkedList{
    Node *head;
    Node *tail;
    int len;
public:
    LinkedList(){
        head = NULL;
        tail = NULL;
        len = 0;
    }
    bool empty(){
        if(head==NULL){
            return true;
        }
        return false;
    }
    void push_back(int data){
        Node *new_node = new Node(data);
        if(head==NULL){
            head = tail = new_node;
        }
        else{
            tail->next = new_node;
            tail = new_node;  
        }
        len++;
    }
    void push_front(int data){
        Node *new_node = new Node(data);
        if(head==NULL){
            head = tail = new_node;
        }
        else{
            new_node->next = head;
            head = new_node;
        }
        len++;
    }
    void print(){
        Node *temp = head;
        while(temp!=NULL){
            cout<<temp->data;
            if(temp->next!=NULL)
                cout<<" --> ";
            temp = temp->next;
        }
        cout<<endl;
    }
    int length(){
        return len;
    }
    void pop_front(){
        if(head==NULL){
            return;
        }
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        len--;
    }
    void pop_back(){
        if(tail==NULL){
            return;
        }
        Node *temp = head;
        while(temp->next->next!=NULL){
            temp = temp->next;
        }
        tail = temp;
        temp = temp->next;
        tail->next = NULL;
        delete temp;
        len--;
    }
    void reverse(){
        Node *prev = NULL;
        Node *curr = head;
        Node *next;
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }
};
int main(){
    LinkedList l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.push_front(0);
    l.push_front(-1);
    l.pop_back();
    l.pop_front();
    l.print();
    cout<<l.length()<<endl;
    l.reverse();
    l.print();
    return 0;
}