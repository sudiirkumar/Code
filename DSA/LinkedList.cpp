#include<bits/stdc++.h>
#include"list.h"
using namespace std;
int main(){
    List l;
    l.pushFront(1);//1
    l.pushBack(2);//1 2
    l.pushFront(0);//0 1 2
    l.pushBack(5);//0 1 2 5
    l.insert(3,3);//0 1 2 3 5
    l.insert(4,4);//0 1 2 3 4 5
    l.insert(-1,0);//-1 0 1 2 3 4 5

    l.reverse();
    Node* head = l.begin();
    while(head!=NULL){
        cout<<head->getData()<<" -> ";
        head = head->next;
    }
    cout<<"NULL"<<endl;
    return 0;
}