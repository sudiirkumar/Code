#include<iostream>
using namespace std;
int main()
{
	int run[3],inning[3],notout[3];
	float avg[3];
	string name[3];
	for(int i=0;i<3;i++)
	{
		cout<<"Enter name of Player "<<i+1<<" : ";
		cin>>name[i];
		cout<<"Enter runs for Player "<<i+1<<" : ";
		cin>>run[i];
		cout<<"Enter innings by Player "<<i+1<<" : ";
		cin>>inning[i];
		cout<<"Enter number of not outs : ";
		cin>>notout[i];
		cout<<endl<<endl;
		avg[i]=run[i]/inning[i];
	}
	cout<<"|Name|\t|Runs|\t|Innings|\t|Times not out|\t|Batting Average|"<<endl;
	cout<<"----------------------------------------------------------------------------------------"<<endl;
	for(int i=0;i<3;i++)
	{
		
		cout<<name[i]<<"\t";
		cout<<run[i]<<"\t";
		cout<<inning[i]<<"\t";
		cout<<notout[i]<<"\t";
		avg[i]=run[i]/inning[i];
		cout<<avg[i]<<endl;
	}
	return 0;
}
