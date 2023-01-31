#include<iostream>
using namespace std;
class factorial
{
	public:
		void fact()
		{
			int num,a,fact=1;
	        for(int i=1;i<=num;i++)
	        {
	        	fact=fact*i;
        	}
        	a=fact;
		}
};
int main()
{
	factorial f;
	int num;
	cout<<"Enter a number to find it's factorial : ";
	cin>>num;
	f.fact();
	return 0;
}
