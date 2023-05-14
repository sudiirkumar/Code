#include <stdio.h>
#include "LL.h"
int main(){
	LL *l = createList();
	push_back(l,10);
	push_back(l,20);
	push_front(l,0);
	push_back(l,30);
	push_front(l,-10);
	Node* temp = l->head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}
	pop_front(l);
	pop_back(l);
	printf("\n%d\n",size(l));
	temp = l->head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}
	reverse(l);
	printf("\n%d\n",size(l));
	temp = l->head;
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp = temp->next;
	}
	return 0;
}