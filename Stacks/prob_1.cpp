#include<iostream>
#include<vector>
using namespace std;
class Stack
{
    vector<int> item;
    int Top;

    public:

    Stack(int s){   /*******Constructor*******/
        item.resize(s);
        Top = -1;
    }
    void push(int x){
        if(Top==item.size())
            Top++;
            item[Top] = x;
    }
    int  pop(){
            if(Top = -1)
            {
                cout<<"Stack underflow"<<endl;
            }
            else{
                int x;

            }
    }
    int StackTop(){

    }
};

int main(){
    Stack stk(10);
    stk.push(1);
}