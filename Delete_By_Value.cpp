#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;

void insert(int data)
{
    if (head == NULL && tail == NULL)
    {
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;

        head = newNode;
        tail = newNode;
    }
    else
    {
        Node *newNode = new Node();
        newNode->data = data;
        newNode->next = head;

        head = newNode;
    }
}

void valDelete(int data)
{
    if (head == NULL)
        return;
    Node *temp = head;
    if (head->data == data && tail->data == data)
    {
        head = NULL;
        tail = NULL;

        delete (temp);
        return;
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
        if (temp->next == tail)
        {

            tail = temp;
            temp->next = NULL;
            delete (temp->next);
            return;
        }
    }
    else
    {
        Node *tempForward = temp->next;
        while (tempForward != NULL)
        {

            if (tempForward->data == data)
            {
                temp->next = tempForward->next;
                delete (tempForward);
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
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
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
    valDelete(10);
    print();
}