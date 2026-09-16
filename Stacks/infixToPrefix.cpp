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

string infixToPrefix(string infix)
{
    Stack s(20);
    string prefix;

    int i = infix.size()-1;

    while (i < infix.size())
    {
        char symbol = infix[i];

        if ((symbol >= 'a' && symbol <= 'z') || (symbol >= 'A' && symbol <= 'Z') ||(symbol >= '0' && symbol <= '9'))
        {
            prefix += symbol;
        }
        else
        {
            while (!s.IsEmpty() && ! prcd( symbol, s.StackTop()))
            {
                char x = s.Pop();
                prefix = prefix + x;
            }

            s.Push(symbol);
        }

        i--;
    }

  
    while (!s.IsEmpty())
    {
        prefix += s.Pop();
    }

    return prefix;
}
   int main()
{
    string infix;

    cout << "Enter Infix Expression: ";
    cin >> infix;

    string prefix = infixToPrefix(infix);

    cout << "Prefix Expression: " << prefix << endl;

    return 0;
}
