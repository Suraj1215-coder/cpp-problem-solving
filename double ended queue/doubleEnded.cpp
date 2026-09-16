#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node *prev;
};

node *GetNode()
{
    node *p = new node;
    p->next = NULL;
    p->prev = NULL;
    return p;
}

// Insert at the left 
void insertLeft(int x, node *left, node *right)
{
    node *p = GetNode();
    p->data = x;
    p->next = left;

    if (left != NULL)
    {
        left->prev = p;
    }
    else
    {
        
        right = p;
    }

    left = p;
}

// Insert at the right 
void insertRight(int x, node *left, node *right)
{
    node *p = GetNode();
    p->data = x;
    p->prev = right;

    if (right != NULL)
    {
        right->next = p;
    }
    else
    {
        
        left = p;
    }

    right = p;
}

 // Delete left

 void deleteLeft(node *left, node *right)

 {
     node *p = GetNode();
    p = left;
    left = left->next;
    if(left!=NULL)
    {
        left->prev = NULL;
    }
    else{
        right = NULL;
        int x = p->data;
        delete(p);
        return x;
    }

    
 }

 // delete right

 void deleteRight(node *left, node *right, int x)
 {
     node *p = GetNode();
    p = right;
    right = right->prev;
    if(right!= NULL)
    {
        right -> next = NULL;

    }
    else 
        left = NULL;
        x = p->data;
        delete(p);
        return x;

 }
void display(const node *left)
{
    if (left == NULL)
    {
        cout << "Deque is empty\n";
        return;
    }

    cout << "Deque: ";
    while (left != NULL)
    {
        cout << left->data << ' ';
        left = left->next;
    }
    cout << '\n';
}



int main()
{
    node *left =NULL;
    node *right =NULL;

    insertLeft(2, left, right);
    insertLeft(4, left, right);
    display(right);
    insertRight(6, left, right);
    insertRight(1, left, right);

    display(left);

    
    return 0;
}
