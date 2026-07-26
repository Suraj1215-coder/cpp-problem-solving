#include<iostream>
using namespace std;
// class Student{   // Student is a new data type
//     public:
//         string name;
//         int rollN;
//         float cgpa;

// };

class Car{
    public:
    string name;
    int parts;
    string type;
    int price;
    int seats;

};
void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.parts<<" "<<c.type<<" "<<c.seats<<endl;
}
int main(){
    // Student s;
    // s.name = "Surya Bhargav";
    // s.rollN = 88;
    // // s.cgpa = 8.9;
    // cin>>s.cgpa;
    // cout<<s.name<<endl;

    Car c1;
    c1.name = "Honda City";
    c1.parts = 10000;
    c1.price = 1300000;
    c1.seats = 8;
    c1.type = "Sedan";

    Car c2;
    c2.name = "Honda City";
    c2.parts = 10000;
    c2.price = 12222;
    c2.seats = 8;
    c2.type = "surya";
    print(c1);
    print(c2);
}