#include<iostream>
using namespace std;

    struct Time {
        int hour;
        int min;
        int sec;
    };

    struct Surya {
        string  name;
        int rollNo ;
        int sec;
        float per;

    };

    

    int main()
    {
        Time T = {7,15,20};
        cout<<T.hour<<" "<<T.min<<" "<<T.sec;
        cout<<endl;
        Time *ptr;
        ptr = &T;
        cout<<ptr->hour<<" "<<ptr->min<<" "<<ptr->sec<<endl;

        cout<<"SURYA BHARGAV"<<endl;

        Surya S = {"Varun", 201, 36, 89.54};
        cout<<S.name<<" "<<S.rollNo<<" "<<S.sec<<" "<<S.per<<endl;

        Surya *p;
        p = &S;
        cout<<p->name<<" "<<p->rollNo<<endl;
        

    }
