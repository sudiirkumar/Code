#include<iostream> 
#include<iomanip>
using namespace std; 
char *serial[3]={" FIRST "," SECOND " ," THIRD "};//global declaration
int main() 
{ 
int n; 
string *name[100]; 
int *run; 
int *innings; 
int *time_not_out; 
cout<<" How many players' record would you insert ? :"; 
cin>>n; 
for(int i=0;i<n;i++) 
{ 
if(i>2) 
{ 
cout<<"\n Input details of "<<i+1<<"th"<<" player's"<<endl; 
} 
else 
{ 
cout<<" Input details of "<<serial[i]<<"player's : "<<endl; 
} 
cout<<" Enter name : "; 
std::cin>>name[i]; 
cout<<" Enter run : "; 
cin>>run[i]; 
cout<<" Enter innings : "; 
cin>>innings[i]; 
cout<<" Enter times not out : "; 
cin>>time_not_out[i]; 
} 
float *average; 
average=new float[n]; 
for(i=0;i<n;i++) 
{ 
float avrg; 
average[i]=float(run[i])/innings[i]; 
} 
cout<<endl<<endl; 
cout<<setw(12)<<"player's name "<<setw(11)<<"run"<<setw(12)<<"innings"<<setw(16)<<"Average"<<setw(20)<<"times not out"<<endl; 
for(i=0;i<n;i++) 
{ 
cout<<setw(14)<<name[i]<<setw(11)<<run[i]<<setw(9)<<innings[i]<<setw(18)<<average[i]<<setw(15)<<time_not_out[i]<<endl;
} 
cout<<endl; 
return 0; 
}
