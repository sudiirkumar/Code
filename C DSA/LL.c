#include<stdio.h>
#include "LL.h"
int main(){
    LL *l = createList();
    insertWithoutTail(l,12);
    insertWithoutTail(l,13);
    insertWithoutTail(l,14);
    insertWithoutTail(l,15);
    insertWithoutTail(l,2);
    insertWithoutTail(l,6);
    display(l);
    delete(l,13);
    display(l);
    delete(l,2);
    display(l);
    insertWithoutTail(l,45);
    insertWithoutTail(l,30);
    insertWithoutTail(l,33);
    insertWithoutTail(l,34);
    insertWithoutTail(l,49);
    display(l);
    delete(l,49);
    display(l);
    return 0;
}