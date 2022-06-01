#include<stdio.h>
void insert(int a[],int *n,int x){
    int i;
    for ( i = *n-1; i>=0; i--)
    {   
        if(x<a[i])
            a[i+1] = a[i];
        else
            break;
    }
    a[i+1] = x;
    (*n)++;
}
void sort(int a[],int n){
    int i,j;
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(a[i]>a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main(){
    int a[100];
    int n,i,x;
    printf("Enter number of elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nEnter an element : ");
        scanf("%d",&a[i]);
    }
    printf("\nStored array : \n");
    for(i=0;i<n;i++){
        printf("%4d",a[i]);
    }
    sort(a,n);
    printf("\nArray in sorted order : \n");
        for(i=0;i<n;i++){
        printf("%4d",a[i]);
    }
    printf("\nEnter an element to insert : ");
    scanf("%d",&x);
    insert(a,&n,x);
    printf("\nArray after insert : \n");
        for(i=0;i<n;i++){
        printf("%4d",a[i]);
    }

    return 0;
}