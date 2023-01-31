#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number to find if it is an even or a odd number : ";
	cin>>n;
	if(n%2==0)
	cout<<n<<" is an even number.";
	else
	cout<<n<<" is an odd number.";
	return 0;
}
