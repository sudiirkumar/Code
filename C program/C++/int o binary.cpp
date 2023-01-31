#include<iostream>
using namespace std;
int main()
{
	int a,i=1;
	cout<<"Enter an integer to convert it into binary : ";
	cin>>a;
	do
	{
		int n;
		n=a%2;
		cout<<n;
		a/=2;
	}
	while(a!=1);
	cout<<"1";
	return 0;
}
