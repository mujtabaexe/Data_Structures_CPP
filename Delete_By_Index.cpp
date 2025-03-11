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
        tail = newNode;
    }
}

void index_delete(int index)
{
    Node *temp = head;
    int count = 0;

    if (head == NULL)
        return;
    if (head->next == NULL && tail->next == NULL)
    {
        head = NULL;
        tail = NULL;
        delete (temp);
        return;
    }

    else if (index == count)
    {
        head = temp->next;
        delete (temp);
        return;
    }

    else
    {
        
        Node *tempForward = temp->next;
        while (tempForward)
        {
            count++;
            if (index == count)
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

    while (temp)
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

    index_delete(4);
    print();
}