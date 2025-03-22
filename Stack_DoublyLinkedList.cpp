#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
};

Node *top = NULL;

void push(int data)
{
    Node *newNode = new Node();

    if (top == NULL)
    {
        top = newNode;
        top->data = data;
    }

    top->next = newNode;
    newNode->prev = top;
    top = newNode;
    top->data = data;
}

void pop()
{

    cout << top->data << endl;
    top = top->prev;
}


int main(int argc, char const *argv[])
{
    push(10);
    push(20);
    push(30);
    push(40);

    pop();
    pop();
    pop();
    return 0;
}
