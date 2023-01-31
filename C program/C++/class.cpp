#include<iostream>
using namespace std;
class person
{
	char name[30];
	int age;
	public:
		void getdata();
		void displaydata();
};
void person::getdata()
{
	cout<<"Enter name of the Person : ";
	cin>>name;
	cout<<"Enter age of the Person : ";
	cin>>age;
}
void person::displaydata()
{
	cout<<"Name : "<<name<<"\n"<<"Age : "<<age;
}
int main()
{
	person p;
	p.getdata();
	p.displaydata();
	return 0;
}
