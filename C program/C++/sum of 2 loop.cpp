#include<iostream>
using namespace std;
int main()
{
	int a,b,sum;
	for(int i=1;i<=4;++i)
	{
		cout<<"\n\nEnter two numbers : ";
	    cin>>a>>b;
		sum=a+b;
		cout<<"\nThe sum  of "<<a<<" and "<<b<<" is "<<sum;
	}
	return 0;
}

