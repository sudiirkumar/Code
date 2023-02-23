#include<iostream>
using namespace std;
int strlen(char arr[]){
    int len=0;
    for(int i=0;arr[i]!='\0';i++){
        len++;
    }
    return len;
}
int main(){
    char a[10] = "SWSWN";
    int n = strlen(a);
    int x = 0;
    int y=0;
    for(int i=0;i<n;i++){
        switch(a[i]){
            case 'N':   y++;
                        break;
            case 'S':   y--;
                        break;
            case 'E':   x++;
                        break;
            case 'W':   x--;
                        break;  
        }
    }
    string ans = "";
    while(y>0){
        ans.push_back('N');
        y--;
    }
    while(y<0){
        ans.push_back('S');
        y++;
    }
    while(x>0){
        ans.push_back('E');
        x--;
    }
    while(x<0){
        ans.push_back('W');
        x++;
    }
    cout<<ans<<endl;
    return 0;
}