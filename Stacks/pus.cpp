#include<iostream>
#include<vector>
using namespace std;

class Stack{
public:
    vector<int> item;
    int top;

    Stack(int M){
        item.resize(M);
        top = -1;
    }

    void decimalToBinary(int N){
        Stack stk(20);
        while(N!=0)
        {
            int r = N%2;
            stk.Push(r);
            N = N/2;
        }
    }

    void decimalToOctal(int N){
        Stack stk(20);
        while(N!=0)
        {
            int r = N%8;
            stk.Push(r);
            N = N/8;
        }
    }

    void decimalToHexa(int N){
        char dat[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
                '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
        Stack stk(20);
        while(N!=0)
        {
            int r = N%16;
            stk.Push(r);
            N = N/16;
        }
        while(!stk.IsEmpty()){
            int x = stk.Pop();
            cout<<dat[x];
        }
    }
    void Push(int x){
        if(top==item.size()-1)
            cout<<"Stack overflow";
        else{   
            top++;
            item[top] = x;
        }
    }

int Pop() {
    if (top == -1) {
        cout << "Stack Underflow" << endl;
    }
    else{
    int x = item[top];
    top--;
    return x;
}
}

    int StackTop(){
        int x = item[top];
        return x;
    }

    bool IsEmpty(){
        if(top == -1)
            return true;
        else
            return false;
    }

    //PostFix Expression 
    int postFix(int pfx)
    {
        Stack stk(60);
        int i = 0;
        while(i<pfx.size())
        {
            int symbol = pfx[i];
            i++;
        }
    }
};

int main(){

    Stack S(30);

    // S.Push(1);
    // S.Push(2);
    // S.Push(3);
    // S.Push(4);

    // int x = S.Pop();
    // cout << x << endl;

    // x = S.StackTop();
    // cout << x << endl;

    // x = S.Pop();
    // cout << x << endl;

    // S.Push(5);

    // x = S.StackTop();
    // cout << x << endl;

    // x = S.Pop();
    // cout << x << endl;

    // x = S.Pop();
    // cout << x << endl;

    // x = S.Pop();
    // cout << x << endl;

    // x = S.Pop();
    // cout << x << endl;
    int N;
    cin>>N;
    S.decimalToBinary(N);
    S.decimalToOctal(N);
    S.decimalToHexa(N);

    return 0;
}