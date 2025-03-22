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

    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        tail->next = head;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
        tail->next = head;
    }
}

void valDelete(int data){

    Node* temp = head;

    if (head == NULL) return;

    else if (head->data == data && tail->data == data){
        head = NULL;
        tail = NULL;

        delete(temp);
        return;
    }

    else if (head->data == data){
        head = temp->next;
        tail->next = head;

        delete(temp);
        return;
    }

    else if (tail->data == data){
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        tail = temp;
        delete(temp->next);
        temp->next = head;
        return;
    }

    else{
        Node* tempForward = temp->next;
        while(tempForward->next != head){
            if(tempForward->data == data){
                temp->next = tempForward->next;
                delete(tempForward);
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

    if (head == NULL)
        return;

    while (temp->next != head)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << " ";
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

    valDelete(20);
    print();
}