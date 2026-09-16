#include<iostream>
#include<stack>
using namespace std;
int main(){
    
    int decimal;
    cin>>decimal;

    stack<int> s;
    while(decimal !=0){
    int r = decimal%2;
    s.push(r);
    decimal /=2;

    while(!s.empty())
{
    int x = s.top();
    cout<<x;
    s.pop();
}
    }
}
