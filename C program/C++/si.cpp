#include<iostream>
using namespace std;
int main()
{
	int p,t;
	float r,si;
	cout<<"Enter Principle : ";
	cin>>p;
	cout<<"Enter Rate : ";
	cin>>r;
	cout<<"Enter Time period : ";
	cin>>t;
	si=p*r*t/100;
	cout<<"The Simple Interest is "<<si<<".";
	return 0;
}
