//Stack using linked list
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head = nullptr;

void push(int value)
{
    Node* temp = new Node();
    temp ->data = value;
    temp ->next = NULL;

    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        temp ->next = head;
        head = temp;
    }
}

void pop()
{
    Node* temp = head;
    head = temp ->next;
    delete temp;
}

void traversal()
{
    Node* temp = head;
    cout << "Stack Elements: ";
    while(temp != NULL)
    {
        cout << temp ->data << " ";
        temp = temp ->next;
    }
    cout << "\n";
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    traversal();

    pop();
    traversal();
    cin.get();
return 0;
}

