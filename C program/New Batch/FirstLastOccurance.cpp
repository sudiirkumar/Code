#include<stdio.h>
int main(){
    int arr[] = {1,2,5,1,7,3,1,2,5,1,7};
    int n = sizeof(arr)/sizeof(int);
    int key;
    printf("Enter key to find: ");
    scanf("%d",&key);
    int f_idx = -1;//1
    int l_idx = -1;
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            if(f_idx==-1){
                f_idx = i;
            }
            l_idx = i;
        }
    }
    printf("%d %d",f_idx,l_idx);
    return 0;
}