#include<iostream>
using namespace std;
int main()
{
	float p,t,r,v;
	cout<<"Enter Principle : ";
	cin>>p;
	cout<<"\nEnter Rate : ";
	cin>>r;
	cout<<"\nEnter Time in years : ";
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		v=p*(100+r)/100;
		p=v;
		cout<<"\nAmount in "<<i<<" years is "<<v<<"."<<endl;
	}
	cout<<"\nAmount at the end of "<<t<<" years is "<<v<<"."<<endl;
	return 0;
}
