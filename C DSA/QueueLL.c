#include<stdio.h>
#include "QueueLL.h"
int main(){
	Queue *q = createQueue();
	push(q,10);
	push(q,20);
	push(q,30);
	push(q,40);
	push(q,50);
	printf("%d\n",size(q));
	pop(q);
	pop(q);
	printf("%d\n",size(q));
	while(!empty(q)){
		printf("%d ",front(q));
		pop(q);
	}
	return 0;
}