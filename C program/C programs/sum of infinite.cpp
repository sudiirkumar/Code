#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int i=1;
	float a=1,term,sum=0;
	do
	{
	    term=pow(a/i,i);
		sum+=term;
		cout<<term<<endl;
		i+=1;
	}
	while(term!=0.000000);
	cout<<"Sum : "<<sum<<endl;
	return 0;
}
