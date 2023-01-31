#include<iostream>
using namespace std;
int main()
{
	int num,rem,i,n;
	cout<<"Enter a number : ";
	cin>>num;
	for(i=2;i<num;++i)
	{
		rem=num%i;
		if(rem==0)
		n=n+1;
	}
	if(n==0)
	cout<<num<<" is a prime number.";
	else
	cout<<num<<" is not a prime number.";
	return 0;
}
