#include<iostream>
using namespace std;
int main()
{
	float l,b,area,peri;
	cout<<"Enter length of the rectangle : ";
	cin>>l;
	cout<<"Enter breadth of the rectangle : ";
	cin>>b;
	area=l*b;
	peri=2*(l+b);
	cout<<"The area of the rectangle is "<<area<<".";
	cout<<"\nThe Perimeter of the rectangle is "<<peri<<".";
	return 0;
}
