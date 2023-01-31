
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int i=2;
    float x,term=1,sum=1;
    cout<<"Enter value of x : ";
    cin>>x;
    do
    {
        term*=((-1)*x*x/(((2*i)-2)*((2*i)-3)));
        cout<<term<<endl;
        sum+=term;
        i++;
    } while ((term*term)>0.00001);
    cout<<"cos("<<x<<") = "<<sum<<endl;
    return 0;
}
