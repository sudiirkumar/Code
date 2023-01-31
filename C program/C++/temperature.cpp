#include<iostream>
using namespace std;
int main()
{
	float F,C;
	cout<<"Enter value of Temperature in °F : ";
	cin>>F;
	C=(F-32)*5/9;
	cout<<"The value of "<<F<<"°F is "<<C<<"°C.";
	return 0;
}
