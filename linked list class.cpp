//Stack using linked list (Class)
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node* head = NULL;
public:
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

};


int main()
{
    Node sc;
    sc.push(10);
    sc.push(20);
    sc.push(30);
    sc.push(40);
    sc.traversal();

    sc.pop();
    sc.traversal();

cin.get();
return 0;
}
