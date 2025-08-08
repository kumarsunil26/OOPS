#include<iostream>
using namespace std;
class Car{//student is new class data type
    public:
    string name;
    int price;
    string color;

};
void print(Car s){
    cout<<s.name<<" "<<s.price<<" "<<s.color<<" "<<endl;
    
}
int main(){
    Car s1;
    s1.name="Scorpio";
    s1.price=2100000;
    s1.color="Black";
   // cout<<s1.name<<" "<<s1.price<<" "<<s1.color<<" ";
  Car s2;
    s2.name="Fortuner";
    s2.price=4100000;
    s2.color="Black";
     //cout<<s1.name<<" "<<s1.price<<" "<<s1.color<<" "; cout<<s2.name<<" "<<s2.price<<" "<<s2.color<<" ";
    print(s1);
    print(s2);
}
