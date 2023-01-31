#include<iostream>
#include<exception>
using namespace std;
class exp_negative : public exception
{
	public:
		const char*what() const throw()
		{
			return"Factorial of a negative number is not possible.\n";
		}
};
int fact(int a)
{
	int i=1,factorial=1;
	for(i=1;i<=a;i++)
	{
		factorial*=i;
	}
	return factorial;
}
int main()
{
	try
	{
		int x;
		cout<<"Enter a positive integer : \n";
		cin>>x;
		if(x<0)
		{
			exp_negative e1;
			throw e1;
		}
		else
		{
			cout<<"Factorial of "<<x<<" is "<<fact(x)<<endl;
		}
	}
	catch (exception&e)
	{
		cout<<e.what();
	}
}
