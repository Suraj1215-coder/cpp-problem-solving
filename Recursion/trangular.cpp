#include<iostream>
using namespace std;
int helper(int n,int i)
{
    if(n==0) 
    return true;
    else if(n<0)
    return false;
    cout<<helper(n-1, i+1)<<endl;
}
int main()
{
    int n;
    cin>>n;
    cout<<helper(n,1)<<endl;
}