#include<iostream>
using namespace std;
int main()
{
	int pin,option,count=0;
	long int balance=1000,deposit,withdraw;
	int exit;
	while(pin!=7274)
	{
		cout<<"Please enter your pin number : ";
		cin>>pin;
		if(pin!=7274)
		{
			cout<<"Entered pin is wrong.\nPlease try again.\n\n";
			count=count+1;
		}
	}
	do
	{
		cout<<"\t\t\t\t\t\t\\\\\\\\Welcome To ATM services.////////\n"<<endl;
		cout<<"\t\t\t\t\t\t-------------------------------------\n";
		cout<<"1. Check balance \n2. Withdraw Cash \n3. Deposit cash \n4. Quit\n";
		cout<<"Enter your choice : ";
		cin>>option;
		switch(option)
		{
			case 1:
				cout<<"Your balance : "<<balance<<"\n";
				break;
			case 2:
				cout<<"Enter amount to withdraw : \n";
				cin>>withdraw;
				if(withdraw%100!=0)
				cout<<"Please enter an amount in multiple of 100.\n";
				else
				if(withdraw>=balance)
				cout<<"Insufficient funds in your bank account. \n";
				else
			{
				balance=balance-withdraw;
				cout<<"Please collect your cash\n";
				cout<<"Remaining balance : "<<balance<<"\n";
			}
				break;
			case 3:
				cout<<"Enter amount to deposit : \n";
				cin>>deposit;
				balance=balance+deposit;
				cout<<"Your Balance : "<<balance<<"\n";
				break;
			case 4:
				cout<<"Thanks for Using Our ATM.\n";
				break;
			default:
				cout<<"Enter a valid option.";
				break;
		}
		cout<<"Do you want to make another transaction?\n1. Yes\n2. No\n ";
		cin>>exit;
	}
	while(exit!=2);
	cout<<"Thanks for Using ATM services.";
	return 0;
}
