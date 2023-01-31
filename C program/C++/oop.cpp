#include<iostream>
using namespace std;
class Mathematics
{
	int x,y;
	public:
		void input()
		{
			cout<<"Enter two integers : ";
			cin>>x>>y;
		}
		void add()
		{
			cout<<"Result : "<<x+y;
		}
};
int main()
{
	Mathematics m;
	m.input();
	m.add();
	return 0;
}
