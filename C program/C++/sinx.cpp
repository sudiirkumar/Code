#include<iostream>
using namespace std;
int main()
{
	float x,term,sin=0;
	int i=2;
	cout<<"Enter value of x to calculate sin(x) : ";
	cin>>x;
	term=x;
	sin=x;
	do
	{
		term*=(((-1)*x*x)/(((2*i)-1)*((2*i)-2)));
		sin+=term;
		cout<<term<<endl;
		i+=1;
	}
	while(term!=0.000000);
	cout<<"sin("<<x<<") : "<<sin<<endl;
	return 0;
}
