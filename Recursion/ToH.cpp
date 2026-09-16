#include<iostream>
using namespace std;
void ToH(int n , char s , char m, char d)
{
    if(n==1)
     cout<<s<<"-->"<<d<<endl;
     else 
     {
        ToH(n-1, s,d,m);
        cout<<s<<"-->"<<d<<endl;
        ToH(n-1, m,s,d);
     }
}
int main()
{
    ToH();
}