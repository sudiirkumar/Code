#include<iostream>
using namespace std;
int n;
class prime_no
{
	public:
		void print()
	{	
		int pnum[n];
		for(int i=2;i<n;i++)
		{
			int k=0;
			for(int j=2;j<n;j++)
			{
				int rem;
				rem=i%j;
				if(rem==0)
				k+=1;
			}
			if(k==0)
			i=pnum[i-2];
			cout<<pnum[i-2];
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

