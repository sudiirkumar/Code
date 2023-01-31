#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<time.h>
using namespace std;
int draw_line(int n,char ch);
int board();
int gamescore(char name1[],char name2[],int p1,int p2);
int play_dice(int & score);
int draw_line(int n,char ch)
	{
		for (int i=0;i<n;i++)
		cout<<ch;
	}
	int board()
	{
		cout<<"\n\n";
		draw_line(50,'-');
		cout<<"\n\nSNAKE AT POSITION\n";
		draw_line(50,'-');
		cout<<"\n\tFROM 98 to 28 \n\tFrom 95 to 24\n\tFrom 92 to 51\n\tFrom 83 to 19\n\tFrom 72 to 1\n\tFrom 69 to 33\n\tFrom 64 to 36\n\tFrom 59 to 17\n\tFrom 55 to 7\n\tFrom 52 to 11\n\tFrom 48 to 9\n\tFrom 46 to 5\n\tFrom 44 to 22\n\n";
		draw_line(50,'-');
		cout<<"\n\tFROM 8 to 26 \n\tFrom 21 to 82\n\tFrom 43 to 77\n\tFrom 50 to 91\n\tFrom 62 to 96\n\tFrom 66 to 87\n\tFrom 80 to 100\n\n";
		draw_line(50,'-');
		cout<<endl;
	}
	int gamescore(char name1[],char name2[],int p1,int p2)
	{
		cout<<"\n";
		draw_line(50,'~');
		cout<<"\n\t\tGAME STATUS\n";
		draw_line(50,'~');
		cout<<"\n\t--> "<<name1<<" is at position "<<p1<<endl;
		cout<<"\t--> "<<name2<<" is at position "<<p2<<endl;
		draw_line(50,'_');
		cout<<endl;
	}
	int play_dice(int & score)
	{
		int dice;
		for(int n=0;n<5;n++)
		{
			dice=n+1;
		}
		cout<<"\nYou got "<<dice<<" Point!!";
		score=score+dice;
		cout<<"Now you are at position "<<score;
		switch(score)
		{
			case 98:
				score=28;
				break;
			case 95:
				score=24;
				break;
			case 92:
				score=51;
				break;
			case 83:
				score=19;
				break;
			case 73:
				score=1;
				break;
			case 69:
				score=33;
				break;
			case 64:
				score=36;
				break;
			case 59:
				score=17;
				break;
			case 55:
				score=7;
				break;
			case 52:
				score=11;
				break;
			case 48:
				score=9;
				break;
			case 46:
				score=5;
				break;
			case 44:
				score=22;
				break;
			case 8:
				score=26;
				break;
			case 21:
				score=82;
				break;
			case 43:
				score=77;
				break;
			case 50:
				score=91;
				break;
			case 54:
				score=93;
				break;
			case 62:
				score=96;
				break;
			case 66:
				score=87;
				break;
			case 80:
				score=100;
				break;
		}
	}
int main()
{
	int player1=0,player2=0,lastposition;
	char player1name[80],player2name[80];
	draw_line(50,'=');
	cout<<"\n\n\n\n\nSNANKE LADDER GAME\n\n\n\n";
	draw_line(50,'-');
	cout<<"\n\n\nEnter name of player 1: ";
	cin>>player1name;
	cout<<"\n\nEnter name of player 2 : ";
	cin>>player2name;
	while(player1<=100&&player2<=100)
	{
		board();
		gamescore(player1name,player2name,player1,player2);
		cout<<"\n\n-->"<<player1name<<" Now your turn >> Press any key to play ";
		lastposition=player1;
		play_dice(player1);
		if(player1<lastposition)
		cout<<"\nOops!! Snake found !! You are at position "<<player1<<endl;
		else if(player1>lastposition+6)
		cout<<"\nGreat!! You got a ladder ! You are at position "<<player1<<endl;
		cout<<"\n\n--> "<<player2name<<"Now your turn >> Press any key to play ";
		lastposition=player2;
		play_dice(player2);
		if(player2<lastposition)
		cout<<"\n\nOops!! Snake Found !! You are at position "<<player2<<endl;
		else if(player2>lastposition+6)
		cout<<"\nGreat!! You got a ladder! You are at position "<<player2<<endl;
	}
	cout<<"\n\n\n";
	draw_line(50,'+');
	cout<<"\n\n RESULT \n\n";
	draw_line(50,'+');
	cout<<endl;
	gamescore(player1name,player2name,player1,player2);
	cout<<"\n\n\n";
	if(player1>=player2)
	cout<<player1name<<" !! You are the winner of the game\n\n";
	else
	cout<<player2name<<"!! You are the winner of the game\n\n";
	draw_line(50,'+');
	return 0;
}
