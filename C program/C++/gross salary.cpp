#include<iostream>
using namespace std;
int main()
{
	int bs;
	float ta,da,hra,total;
	cout<<"Enter Base salary : ";
	cin>>bs;
	ta=bs*0.10;
	da=bs*0.15;
	hra=bs*0.3;
	total=bs+ta+da+hra;
	cout<<"\n\nTA : "<<ta<<"\nDA : "<<da<<"\nHRA : "<<hra<<"\nTotal salary : "<<total;
	return 0;	
}
