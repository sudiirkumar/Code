#include<iostream>
using namespace std;
class temp
{
	float F,C;
	public:
	void getdata();
	void convert();
	void showdata();
};
void temp::getdata()
{
	cout<<"Enter value in degree Fahrenheit : ";
	cin>>F;
}
void temp::convert()
{
	C=(F-32)*5/9;
}
void temp::showdata()
{
	cout<<"The value in Celsius : ";
}
int main()
{
	temp t;
	t.getdata();
	t.convert();
	t.showdata();
	return 0;
}
