#include<iostream>
using namespace std;
class point
{
	public:
		int x;
		int y;
		point(int i,int j)
		{
			x=i;
			y=j;
		}
		void display()
		{
			cout<<x<<" "<<y<<" "<<endl;
		}
};
int main()
{
	point p1=point(3,4);
	point p2=point(5,9);
	p1.display();
	p2.display();
	return 0;
}

