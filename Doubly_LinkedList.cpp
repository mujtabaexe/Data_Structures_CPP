#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
};

Node *head = NULL;
Node *tail = NULL;

void insert(int data)
{

    Node *newNode = new Node();
    newNode->data = data;

    if (head == NULL && tail == NULL)
    {
        head = newNode;
        tail = newNode;
    }

    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void valDelete(int data)
{

    if (head == NULL)
        return;

    Node *temp = head;
    if (head->next == NULL && tail->next == NULL)
    {
        if (temp->data == data)
        {
            head = NULL;
            tail = NULL;
            delete (temp);
            return;
        }
    }

    else if (head->data == data)
    {
        head = temp->next;
        delete (temp);
        return;
    }

    else if (tail->data == data)
    {
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        tail = temp;
        delete (temp->next);
        return;
    }

    else
    {
        Node *tempForward = temp->next->next;
        while (temp)
        {
            if (temp->next->data == data)
            {
                delete (temp->next);
                temp->next = tempForward;
                tempForward->prev = temp;
                return;
            }
            temp = temp->next;
            tempForward = tempForward->next;
        }
    }
}

void print()
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void reverseprint()
{
    Node *temp = tail;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}
int main()
{

    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);

    print();
    
    valDelete(30);
    print();
    reverseprint();
}