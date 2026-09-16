#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool prcd(char a, char b){
    if(a=='^'|| a=='*'|| a=='/'|| a=='%')
    {
        if(b=='^')
        return false;
        else 
            return true;
    }
    if(a=='+' || a=='-')
    {
        if(b=='+' || b=='-')
        return true;
        else
        return false;
    }

}

string infixToPostfix(string infix)
{
    stack s(20);
    string postfix = "";

    int i = 0;

    while (i < infix.size())
    {
        char symbol = infix[i];

        
        if ((symbol >= 'a' && symbol <= 'z') ||
            (symbol >= 'A' && symbol <= 'Z') ||
            (symbol >= '0' && symbol <= '9'))
        {
            postfix += symbol;
        }
        else
        {
            while (!s.IsEmpty() && prcd(s.StackTop(), symbol))
            {
                postfix += s.Pop();
            }

            s.Push(symbol);
        }

        i++;
    }

    
    while (!s.IsEmpty())
    {
        postfix += s.Pop();
    }

    return postfix;
}
   int main()
{
    string infix;

    cout << "Enter Infix Expression: ";
    cin >> infix;

    string postfix = infixToPostfix(infix);

    cout << "Postfix Expression: " << postfix << endl;

    return 0;
}
