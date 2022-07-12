#include<iostream>
#include"list.h"
using namespace std;
int main(){
    List<int> l;
    l.pushBack(2);
    l.pushFront(1);
    l.insert(0,1);
    l.pushBack(3);
    l.remove(1);

    Node<int> *head = l.begin();
    while(head!=nullptr){
        cout<<head->getData()<<" ";
        head = head->next;
    }
    return 0;
}