#include<iostream>
using namespace std;
class Mobile
{
    public:
        string model_name;
        int price;
        int year;
        float screen_size;
        int megapixel_front;
};
int main(){
    Mobile phone1;
    //initialisation
    phone1.model_name = "Nothing Phone 1";
    phone1.price = 10000;
    phone1.year = 2022;
    phone1.screen_size = 5.5;
    phone1.megapixel_front = 32;
    //printing the value
    cout<<"Model name: "<<phone1.model_name<<endl;
    cout<<"Price: "<<phone1.price<<endl;
    cout<<"Year of release: "<<phone1.year<<endl;
    cout<<"Screen size: "<<phone1.screen_size<<endl;
    cout<<"Front camera MP: "<<phone1.megapixel_front<<endl;

    Mobile phone2;
    //initialisation
    phone2.model_name = "Redmi note 15 pro";
    phone2.price = 15000;
    phone2.year = 2023;
    phone2.screen_size = 5.7;
    phone2.megapixel_front = 48;
    //printing the value
    cout<<"Model name: "<<phone2.model_name<<endl;
    cout<<"Price: "<<phone2.price<<endl;
    cout<<"Year of release: "<<phone2.year<<endl;
    cout<<"Screen size: "<<phone2.screen_size<<endl;
    cout<<"Front camera MP: "<<phone2.megapixel_front<<endl;

    return 0;
}