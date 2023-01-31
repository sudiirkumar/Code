#include<iostream>
using namespace std;
void swap(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	cout<<"Now the values are : \na = "<<a<<"\nb = "<<b<<endl;
}
int main()
{
	int p,q;
	cout<<"Enter value of first number : ";
	cin>>p;
	cout<<"Enter value of second number : ";
	cin>>q;
	cout<<"Entered by you \na = "<<p<<"\nb = "<<q<<endl;
	swap(p,q);
	return 0;
}
