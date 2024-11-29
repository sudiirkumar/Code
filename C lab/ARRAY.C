#include<stdio.h>
#include<conio.h>
void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}
int max(int a, int b){
	return a>b?a:b;
}
int min(int a, int b){
	return a>b?b:a;
}
void sort(int arr[], int n){
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j] > arr[j+1]){
				swap(&arr[j], &arr[j+1]);
			}
		}
	}
}
void reverse(int arr[], int n){
	int i;
	for(i=0;i<n/2;i++){
		swap(&arr[i], &arr[n-i-1]);
	}
}
void display(int *arr, int n){
	int i;
	printf("\nContent of array is:\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int linearSearch(int *arr, int n, int key){
	int i;
	for(i=0;i<n;i++){
		if(arr[i] == key){
			return i;
		}
	}
	return -1;
}
int binarySearch(int *arr, int n, int key){
	int left,right,mid;
	left = 0;
	right = n-1;
	while(left<=right){
		mid = (left+right)/2;
		if(arr[mid] == key)
			return mid;
		if(arr[mid]>key)
			right = mid-1;
		else
			left = mid+1;
	}
	return -1;
}
void main(){
	int a[] = {10,2,21,55,69};
	int n = sizeof(a)/sizeof(int);
	clrscr();
	sort(a,n);
	display(a,n);
	printf("%d\n",binarySearch(a,n,2));
	getch();
}