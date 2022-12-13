#include<iostream>
using namespace std;
struct Node{

int data;
struct Node * next;

};

struct  Node *head = NULL;




void enqueue(int value)
{
 struct Node *n1;
 n1 = new Node();
 n1->data = value;
 n1->next = NULL;

 if(head==NULL){

    head=n1;
 }
 else
 {
      struct Node *temp = head;
    while(temp->next!=NULL)
    {

        temp = temp->next;
    }

    temp->next=n1;
 }

}



void dequeue()
{
    struct Node * temp = head;
    head = temp->next;
    delete(temp);
}

void printqueue()
{
    struct Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }

    cout<<".............."<<endl;

}


int main(){

enqueue(10);
enqueue(20);
enqueue(30);
enqueue(40);
dequeue();
enqueue(30);
printqueue();


return 0;

}

