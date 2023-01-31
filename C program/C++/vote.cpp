#include<iostream>
using namespace std;
int main()
{
	int choice,v1=0,v2=0,v3=0,v4=0,v5=0,s=0;
	cout<<"WELCOME TO VOTE 2021 \n(enter '0000' to stop and show result.)"<<endl; 
	do
	{
		cout<<"\n\nEnter the Candidate number to vote : ";
	    cin>>choice;
		switch(choice)
	{
		case 1:
			v1+=1;
			cout<<"\nVote counted for Candidate "<<choice<<endl;
			break;
		case 2:
			v2+=1;
			cout<<"\nVote counted for Candidate "<<choice<<endl;
			break;
		case 3:
			v3+=1;
			cout<<"\nVote counted for Candidate "<<choice<<endl;
			break;
		case 4:
			v4+=1;
			cout<<"\nVote counted for Candidate "<<choice<<endl;
			break;
		case 5:
			v5+=1;
			cout<<"\nVote counted for Candidate "<<choice<<endl;
			break;
		default:
			s+=1;
			cout<<"\nWRONG CHOICE \nVote Spoilted"<<endl;
			break;
	}
	}
	while(choice!=0000);
	cout<<"\n--------------------------------------------------------------------------------------------------------\nThe Results are : \n\nVotes for Candidate 1 : "<<v1<<"\nVotes for Candidate 2 : "<<v2<<"\nVotes for Candidate 3 : "<<v3<<"\nVotes for Candidate 4 : "<<v4<<"\nVotes for Candidate 5 : "<<v5<<"\nSpoilted Votes : "<<s<<endl;
return 0;	
}
