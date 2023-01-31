#include<iostream>
using namespace std;
int n;
class prime_no
{
	public:
		void print()
	{	
		int pnum[n];
		for(int i=n;i>1;i--)
		{
			int k=0;
			for(int j=2;j<i;j++)
			{
				int rem;
				rem=i%j;
				if(rem==0)
				k+=1;
			}
			if(k==0)
			pnum[1]=i;
			cout<<pnum[1]<<" ";
		}
	}
};
int main()
{
	cout<<"Enter number : ";
	cin>>n;
	prime_no p1;
	p1.print();
	return 0;
}

