#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *GetNode()
{
    return new node;
}


node *EnQueue(node *PQ, int x)
{
    node *R = GetNode();
    R->data = x;
    R->next = NULL;

    if (PQ == NULL || x < PQ->data)
    {
        R->next = PQ;
        return R;
    }

    node *prev = PQ;
    node *curr = PQ->next;

  
    while (curr != NULL && x >= curr->data)
    {
        prev = curr;
        curr = curr->next;
    }

    prev->next = R;
    R->next = curr;
    return PQ;
}

bool DeQueue(node *&PQ, int &x)
{
    if (PQ == NULL)
    {
        return false;
    }

    node *p = PQ;
    x = p->data;
    PQ = PQ->next;
    delete p;
    return true;
}

void Display(const node *PQ)
{
    while (PQ != NULL)
    {
        cout << PQ->data << ' ';
        PQ = PQ->next;
    }
    cout << '\n';
}

int main()
{
    node *PQ = NULL;
    int values[] = {5, 1, 2, 3, 10, 5, 6, 1};

    for (int x : values)
    {
        PQ = EnQueue(PQ, x);
    }

    cout << "Priority queue: ";
    Display(PQ);

    cout << "Dequeue order: ";
    int x;
    while (DeQueue(PQ, x))
    {
        cout << x << ' ';
    }
    cout << '\n';

    return 0;
}
