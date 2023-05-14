#include <stdio.h>
#include"vector.h"
int main(){
	vector *v = createVector();
	push_back(v,1);
	push_back(v,2);
	push_back(v,3);
	push_back(v,4);
	printf("%d\n",size(v));
	printf("%d\n",capacity(v));
	push_back(v,5);
	push_back(v,6);
	push_back(v,7);
	push_back(v,8);
	printf("%d\n",size(v));
	printf("%d\n",capacity(v));
	int i;
	for(i=0;i<size(v);i++){
		printf("%d ",get(v,i));
	}
	return 0;
}