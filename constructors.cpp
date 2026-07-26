#include<iostream>
using namespace std;
class Student{   // Student is a new data type
    public:
        string name;
        int rollN;
        float cgpa;

        Student(string n, int r, float g){   // constructor
            name = n;
            rollN = r;
            cgpa = g;
        }

};

int main(){
     Student s1("surya", 88, 8.9);       // Constructor call then go to constructor
     Student s2("Bhargav", 99 , 9.09);
    // s.name = "Surya Bhargav";
    // s.rollN = 88;
    // // s.cgpa = 8.9;
    // cin>>s.cgpa;
    // cout<<s.name<<endl;
    cout<<s1.cgpa<<" "<<s1.name<<" "<<s1.rollN<<endl;
     cout<<s2.cgpa<<" "<<s2.name<<" "<<s2.rollN<<endl;
    
}