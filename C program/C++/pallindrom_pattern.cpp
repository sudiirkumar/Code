#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		for(int j=i;j>=1;j--)
		{
			cout<<j;
		}
		for(int j=2;j<=i;j++)
		{
			if(i==1)
			{
			 	break;
			}
			else
			cout<<j;
		}
		for(int j=1;j<=n-i;j++)
		{
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
