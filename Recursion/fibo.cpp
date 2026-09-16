#include<iostream>
#include<vector>
using namespace std;

int fibon(int n,vector<int> &dot)
{
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    if(dot[n]==0)
    dot[n]= fibon(n-1, dot) + fibon(n-2, dot);
    return dot[n];
}

int main()
{
    int n;
    cin>>n;
    vector<int> dot(n+1,0);
    for(int i=1; i<=n; i++)
    {
        cout<<i<<": "<<fibon(i , dot)<<endl;
        
    }
}