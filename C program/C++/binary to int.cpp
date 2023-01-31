#include<iostream>
using namespace std;
int main()
{
	int b[8],i=0,num=1;
	for(i=0;i<8;i++)
	{
		cout<<"Enter number "<<i+1<<":";
		cin>>b[i];
	}
	for(i=6;i>=0;i--)
	{
		num=(num*2)+b[i];
	}
	cout<<num;
	return 0;
}
