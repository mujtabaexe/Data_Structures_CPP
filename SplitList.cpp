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

int countList()
{
    int count = 0;
    Node *temp = head;

    if (head == NULL)
        return 0;

    if (head == temp && tail == temp && head->next == NULL && tail->next == NULL)
    {
        count++;
        return count;
    }
    else
    {
        while (temp)
        {
            count++;
            temp = temp->next;
        }

        return count;
    }
}

int splitList(int num)
{
    int fhalf = 0;

    if (num % 2 == 0)
    {
        fhalf = num / 2;
        return fhalf;
    }
    else
    {
        fhalf = ((int)num / 2) + 1;
        return fhalf;
    }
}

void print(int a)
{
    int count = 1;
    Node *temp = head;

    if (head == NULL)
        return;

    if (head == temp && tail == temp && head->next == NULL && tail->next == NULL)
    {
        cout << temp->data << " ";
    }
    else
    {
        while (count <= a && temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
            count++;
        }
        cout << endl;

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
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
    insert(50);
    insert(60);

    print();

    cout << endl;
    int num = countList();
    int a = splitList(num);
    print(a);

    return 0;
}
