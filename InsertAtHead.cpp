#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = NULL;
Node *tail = NULL;

void insertAtHead(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL && tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    
        newNode->next = head;
        head = newNode;
    
}

void print()
{
   Node* temp = head;
   while (temp != NULL){
    cout << temp->data << " ";
    temp = temp->next;
   } 
}

int main()
{
    insertAtHead(10);
    insertAtHead(20);
    insertAtHead(30);
    insertAtHead(40);
    
    print();
    return 0;
}
