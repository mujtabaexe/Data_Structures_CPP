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
        newNode->next = NULL;

        tail->next = newNode;

        tail = newNode;
    }
}

int addition()
{
    Node *temp = head;
    int sum = 0;
    while (temp != NULL)
    {
        sum += temp->data;
        temp = temp->next;
    }
    return sum;
}

void print()
{
    Node *temp = head;

    while (true)
    {
        if (temp == NULL)
        {
            break;
        }

        cout << temp->data << " ";

        temp = temp->next;
    }
}

int main(int argc, char const *argv[])
{
    insert(10);
    insert(20);
    insert(30);
    insert(40);

    print();
    cout << endl; 

    int add = addition();
    cout << add << endl;
    return 0;
}
