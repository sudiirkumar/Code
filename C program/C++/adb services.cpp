#include<iostream>
using namespace std;
class service
{
	int choice;
	public:
		void start();
		void recovery();
		void debug();
		void formatdata();
		void stock();
		void fastboot();
		void reboot();
};
void service::start()
{
	system("adb devices");
}
void service::fastboot()
{
	service s;
	s.start();
	system("adb reboot bootloader");
}
void service::formatdata()
{
	service s;
	s.fastboot();
	system("fastboot wipe data");
	system("fastboot reboot");
}
void service::recovery()
{
	service s;
	s.fastboot();
	system("fastboot flash recovery recovery.img");
	system("fastboot reboot bootloader");
}
void service::stock()
{
	service s;
	s.fastboot();
	system("flash.bat");
	s.formatdata();
}
void service::debug()
{
	service s;
	s.start();
	system("debloat.bat");
}
void service::reboot()
{
	char two;
	cout<<"Do you want to reboot?";
	cout<<"Y/N : ";
	cin>>two;
	if(two=='y'||two=='Y')
	{
		system("@echo Rebooting........");
	    system("fastboot reboot");
	}
	else
	system("exit");
}
int main()
{
	int choice;
	char one,two;
	service s;
	cout<<"\nChoose the operation you want to do...."<<endl;
	cout<<"\n1. Install recovery \n2. Format Data \n3. Install stock rom \n4. Debug\n";
	cout<<"\nCHOICE :  "<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			cout<<"\nHave you renamed the recovery file as recovery.img"<<endl;
			cout<<"\nY/N  :  ";
			cin>>one;
			if(one=='y'||one=='Y')
			{
				s.recovery();
		        s.reboot();
			}
			else
			printf("Restart the program after renaming.... :)");
			
			break;
		case 2:
			cout<<"\nYou really want to do this? "<<endl;
			cout<<"\nY/N : ";
			cin>>one;
			if(one=='y'||one=='Y')
			{
				s.formatdata();
				s.reboot();
			}
			else
			cout<<"\nThank God, I asked!!";
			break;
		case 3:
			cout<<"\nSure for this?";
			cout<<"\nY/N : ";
			cin>>one;
			if(one=='y'||one=='Y')
			s.stock();
			else
			cout<<"\nRestart the program for any other operation.";
			break;
		case 4:
			cout<<"\nIt'll Uninstall all the bloatware from your device!";
			cout<<"\nY/N : ";
			cin>>one;
			if(one=='y'||one=='Y')
			{
				s.debug();
				cout<<"\n\nDo you want to reboot?"<<endl;
				cout<<"Y/N : ";
				cin>>two;
				if(two=='y'||two=='Y')
				system("adb reboot");
				else
				system("exit");
			}
			else
			cout<<"\nBetter if you had do it :(";
			break;
		default:
			cout<<"\nWRONG CHOICE";
			break;
	}
	return 0;
}
