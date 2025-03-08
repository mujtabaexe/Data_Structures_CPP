#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head = 0;
Node *tail = 0;

void insert(int data){
    if(head== NULL && tail == NULL){
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;

        head = newNode;
        tail = newNode;
    }else{
        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = head;

        head = newNode;
    }
}
void print(){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->data<< " ";
        temp = temp->next;
    }
}

int main(){
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);

    print();
}