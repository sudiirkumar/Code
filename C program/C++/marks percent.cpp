#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,total;
	float per;
	cout<<"MARKS CALCULATION";
	cout<<"\n\nEnter marks of 1st Subject : ";
	cin>>a;
	cout<<"Enter marks of 2nd Subject : ";
	cin>>b;
	cout<<"Enter marks of 3rd Subject : ";
	cin>>c;
	cout<<"Enter marks of 4th Subject : ";
	cin>>d;
	cout<<"Enter marks of 5th Subject : ";
	cin>>e;
	total=a+b+c+d+e;
	per=total/5;
	cout<<"\n\nTotal marks : "<<total<<"\nPercentage : "<<per;
	return 0;
	
}
