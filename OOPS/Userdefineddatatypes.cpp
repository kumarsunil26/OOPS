#include<iostream>
using namespace std;
class Student{//student is new class data type
    public:
    string name;
    int rollno;
    float cgpa;

};
int main(){
    Student s;
    s.name="sunil";
    s.rollno=34;
    s.cgpa=8.3;
    cout<<s.name<<" "<<s.rollno<<" "<<s.cgpa<<" ";

    
}
