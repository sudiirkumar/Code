#include<stdlib.h>
typedef struct vector{
	int *arr;
	int curr_size;
	int max_size;
} vector;
vector* createVector(){
	vector* v = (vector*)malloc(sizeof(vector));
	v->curr_size = 0;
	v->max_size = 5;
	v->arr = (int*)calloc(v->max_size,sizeof(int));
}
void push_back(vector* v, int data){
	if(v->curr_size==v->max_size){//doubling case
		int* oldArr = v->arr;
		v->max_size = 2*(v->max_size);
		v->arr = (int*)realloc(v->arr, (v->max_size)*sizeof(int));
		//copying old values into new array
		int i;
		for(i=0;i<v->curr_size;i++){
			v->arr[i] = *(oldArr+i);
		}
		free(oldArr);
		v->arr[(v->curr_size)++] = data;
	}
	else{
		v->arr[(v->curr_size)++] = data;
	}
}
void pop_back(vector* v){
	if(v->curr_size>0){
		(v->curr_size)--;
	}
}
int size(vector *v){
	return v->curr_size;
}
int capacity(vector *v){
	return v->max_size;
}
int get(vector* v, int i){
	if(i<v->max_size){
		return v->arr[i];
	}
}