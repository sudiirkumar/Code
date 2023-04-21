#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
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
        head = tail = NULL;
        len=0;
    }   
    void push_back(int data){
        if(head==NULL){
            //Node new_node(data);//static allocation
            // int *a = new int;
            Node *new_node = new Node(data);
            head = tail = new_node;
        }
        else{
            Node *new_node = new Node(data);
            tail->next = new_node;
            tail = new_node;
        }
        len++;
    }
    void push_front(int data){
        if(head==NULL){
            Node *new_node = new Node(data);
            head = tail = new_node;
        }
        else{
            Node *new_node = new Node(data);
            new_node->next = head;
            head = new_node;
        }
        len++;
    }
    void print(){
        Node *temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" --> ";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
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
        if(head==NULL){
            return;
        }
        Node *temp = head;
        while(temp!=NULL){
            if(temp->next->next==NULL){
                break;
            }
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
        len--;
    }
    void reverse(){
        if(head==NULL){
            return;
        }
        Node *p = NULL;
        Node *c = head;
        Node *n;
        while(c!=NULL){
            n = c->next;
            c->next = p;
            p = c;
            c = n;
        }
        head = p;
    }
};
int main(){
    LinkedList l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_front(0);
    l.print();
    l.reverse();
    l.print();
    cout<<l.length()<<endl;
    return 0;
}