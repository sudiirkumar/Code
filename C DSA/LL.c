#include<stdio.h>
#include "LL.h"
int main(){
    LL *l = createList();
    insert(l,12);
    insert(l,13);
    insert(l,14);
    insert(l,15);
    insert(l,2);
    insert(l,6);
    display(l);
    rem(l,13);
    display(l);
    rem(l,2);
    display(l);
    insert(l,45);
    insert(l,30);
    insert(l,33);
    insert(l,34);
    insert(l,49);
    display(l);
    rem(l,49);
    display(l);
    return 0;
}