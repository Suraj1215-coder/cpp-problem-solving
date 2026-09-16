#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> stk;
    int n;
    cin>>n;
    while(!stk.size())
    {
        int digit = n%2;
        n = n/2;
        cout<<digit<<endl;
    }


}