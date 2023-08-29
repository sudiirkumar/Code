// Check if a character is lowercase, uppercase, digit or other character.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    char character;
    cout<<"Enter a charatcer: ";
    character = getche();
    cout<<endl;
    if(character>='A' and character<='Z')
        cout<<"Upper Case character"<<endl;
    else if(character>='a' and character<='z')
        cout<<"Lower Case character"<<endl;
    else if(character>='0' and character<='9')
        cout<<"Digit"<<endl;
    else
        cout<<"Other character"<<endl;
    return 0;
}