#include<stdio.h>
int main()
{
    int n=1;
    int res=0,term;
    term=n;
    printf("Enter number of terms to add : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        res+=term;
        term=term*10+1;
    }
    printf("Sum = %d",res);
    return 0;
}
