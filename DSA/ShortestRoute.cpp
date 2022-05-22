#include<iostream>
using namespace std;

int main(){
    char direction[1000];

    cin.getline(direction,1000);
    
    int x = 0;
    int y = 0;
    for(int i=0;direction[i]!='\0';i++){
        switch (direction[i])
        {
        case 'N':
            y++;
            break;
        case 'S':
            y--;
            break;
        case 'E':
            x++;
            break;
        case 'W':
            x--;
            break;
        default:
            cout<<"Error in input";
            x=0;
            y=0;
            break;
        }
    }
    cout<<x<<" "<<y<<endl;
    if(x>=0 and y>=0){
        while(x){
            cout<<"E";
            x--;
        }
        while(y){
            cout<<"N";
            y--;
        }
    }
    if(x<=0 and y>=0){
        while(x){
            cout<<"W";
            x++;
        }
        while(y){
            cout<<"N";
            y--;
        }
    }
    if(x<=0 and y<=0){
        while(x){
            cout<<"W";
            x++;
        }
        while(y){
            cout<<"S";
            y++;
        }
    }
    if(x>=0 and y<=0){
        while(x){
            cout<<"E";
            x--;
        }
        while(y){
            cout<<"S";
            y++;
        }
    }
}