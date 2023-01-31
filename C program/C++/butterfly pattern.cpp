#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int s=2*n-2*i;
		for(int j=1;j<=2*n;j++)
		{
			if(j==i||j==(2*n))
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}
