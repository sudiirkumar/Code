#include<stdlib.h>
#include<stdio.h>
#define null NULL
typedef struct Node{
    int val;
    struct Node* next;
}Node;
typedef struct LL{
    Node* head;
    Node* tail;
}LL;
LL* createList(){
    LL *l = (LL*)malloc(sizeof(LL));
    l->head = NULL;
    l->tail = NULL;
    return l;
}
Node* createNode(int val){
    Node* newNode = (Node*)malloc(sizeof(LL));
    newNode->val = val;
    newNode->next = NULL;
    return newNode;
}
void insert_at_head(LL* l, int val){
    Node* newNode = createNode(val);
    if(l->head == NULL){
        l->head = newNode;
        l->tail = newNode;
        return;
    }
    newNode->next = l->head;
    l->head = newNode;
}
void insert_at_tail(LL* l, int val){
    Node* newNode = createNode(val);
    if(l->head == NULL){
        l->head = newNode;
        l->tail = newNode;
        return;
    }
    l->tail->next = newNode;
    l->tail = newNode;
}
void insert(LL* l, int val){
    Node* newNode = createNode(val);
    if(l->head == NULL){
        l->head = newNode;
        l->tail = newNode;
        return;
    }
    if(l->head->val >= val){
        insert_at_head(l,val);
        return;
    }
    if(l->tail->val <= val){
        insert_at_tail(l,val);
        return;
    }
    Node* curr = l->head;
    while(curr->next->val < val){
        curr = curr->next;
    }
    newNode->next = curr->next;
    curr->next = newNode;
}
void insertWithoutTail(LL* l, int val){
    Node* newNode = createNode(val);
    if(l->head == null){
        l->head = l->tail = newNode;
        return;
    }
    if(l->head->val > val){
        newNode->next = l->head;
        l->head = newNode;
        return;
    }
    Node* curr = l->head;
    while(curr->next!=null && curr->next->val < val){
        curr = curr->next;
    }
    newNode->next = curr->next;
    curr->next = newNode;
}
void rem(LL *l, int val){
    Node* curr = l->head;
    if(l->head->val == val){
        l->head = l->head->next;
        free(curr);
        return;
    }
    Node* prev;
    while(curr!=null){
        if(curr->val == val){
            break;
        }
        prev = curr;
        curr = curr->next;
    }
    if(curr == null){
        printf("\nElement not found\n");
        return;
    }
    if(curr->next == null){
        l->tail = prev;
    }
    prev->next = curr->next;
    free(curr);
}
Node* delete(LL* l, int x){
    Node* curr;
    curr = l->head;
    if(l->head->val == x){
        l->head = l->head->next;
        return curr;
    }
    while(curr->next!= null && curr->next->val != x){
        curr = curr->next;
    }
    if(curr->next == null){
        printf("Element not found\n");
        return NULL;
    }
    Node* temp = curr->next;
    curr->next = curr->next->next;
    temp->next = NULL;
    return temp;
}
void display(LL* l){
    Node* curr = l->head;
    while(curr!=NULL){
        printf(" %d -->",curr->val);
        curr = curr->next;
    }
    printf(" NULL\n");
}