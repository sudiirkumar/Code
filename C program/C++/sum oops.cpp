#include<iostream>
using namespace std;
class num
{
	private:
		int a;
		int b;
	public:
		void read();
		void print();
		int add();
};
void num::read()
{
	cout<<"Enter first number : ";
	cin>>a;
	cout<<"Enter Second number : ";
	cin>>b;
}
void num::print()
{
	cout<<"a= "<<a<<"\nb= "<<b;
}
int num::add()
{
	return (a+b);
}
int main()
{
	num n;
	int sum;
	n.read();
	n.print();
	sum=n.add();
	cout<<"\nThe sum is "<<sum;
	return 0;
}
