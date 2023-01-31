#include<iostream>
using namespace std;
int main()
{
    float x=0,y;
    for(int i=1;i<12;i++)
    {
        cout<<i-1<<"\t";
		for(int j=1;j<10;j++)
        {
        	x+=0.1;
        	cout<<x<<"\t";
		}
		cout<<endl;
    }
    return 0;
}
