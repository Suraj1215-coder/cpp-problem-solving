// ___________First Method___________

#include<iostream>
using namespace std;
int gcd(int a , int b)
{
    if(a==b) return a;

    if(a>b) return gcd(a-b, b);
    else return gcd(a, b-a);
}
int main()
{
    cout<<gcd(44,44);
}