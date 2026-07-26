#include<iostream>
using namespace std;  

class Car{
    public:
        string name;
        int parts;
        string type;
        int price;
        int seats;

        Car(int p , int prc, int set, string n, string ty){
            p = parts;
            prc= price;
            set = seats;
            n = name;
            ty = type;
        }

};

int main(){
    

    Car c1(1234, 1300000, 12, "Honda City" , "Sedan");
    // c1.name = "Honda City";
    // c1.parts = 10000;
    // c1.price = 1300000;
    // c1.seats = 8;
    // c1.type = "Sedan";

    // Car c2;
    // c2.name = "Honda City";
    // c2.parts = 10000;
    // c2.price = 12222;
    // c2.seats = 8;
    // c2.type = "surya";
    cout<<c1.name<<endl;
    
}