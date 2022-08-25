#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;
class Car{
  public:
    string id;
    int x;
    int y;
    Car(string id,int x,int y){
        this->id = id;
        this->x = x;
        this->y = y;
    }
    int dist() const{
        return x*x+y*y; 
    }
};
class CarCompare{
    public:
        bool operator()(Car A,Car B){
            return A.dist() < B.dist();
        }
};
void printCar(vector<Car> cars,int k){
    priority_queue<int,vector<Car>,CarCompare> h(cars.begin(),cars.begin()+k);

    for(int i=k;i<cars.size();i++){
        Car car = cars[i];
        if(car.dist()<h.top().dist()){
            h.pop();
            h.push(car);
        }
    }
    vector<string> v;
    while(!h.empty()){
        v.push_back(h.top().id);
        h.pop();
    }
    reverse(v.begin(),v.end());
    for(auto x:v){
        cout<<x<<endl;
    }
}
int main(){
    int n,k;
    cin>>n>>k;
    string id;
    int x,y;

    vector<Car> cars;
    for(int i=0;i<n;i++){
        cin>>id>>x>>y;
        Car car(id,x,y);
        cars.push_back(car);
    }
    printCar(cars,k);
    return 0;
}
