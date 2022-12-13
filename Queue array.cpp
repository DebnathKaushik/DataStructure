#include<iostream>
using namespace std;
# define size 5
int arr[size];
int rear =-1;
int front =-1;

bool is_full()
{

    if(rear==size-1)
    {
        return true;
    }
    return false;

}

bool isempty()
{
    if((rear==-1)&&(front==-1))
    {
        return true;
        cout<<"empty...";

    }
    return false;
}


bool enqueue(int data)
{
    if(is_full())
    {
        cout<<"Queue is full "<<endl;
        return false;
    }
    else if(isempty())
    {
        front=rear=0;
        arr[rear]=data;
        cout<<data<<endl;
        return true;

    }
    else
    {
            rear++;
            arr[rear]=data;
            cout<<data<<endl;
            return true;
    }

}

bool dequeue()
{
    if (isempty())
    {

        cout<<"queue is empty...";
        return false;
    }
    else if(front==rear)
    {
        front= rear =-1;
        cout<<"dequeue done...."<<endl;
        return true;

    }

    else
    {
        front++;
        cout<<"dequeue done....."<<endl;
        return true;
    }

}

void print()
{
    for(int i=front;i<=rear;i++)
    {
        cout<<" "<<arr[i]<<endl;
    }
}





int main()
{


    enqueue(5);
    enqueue(9);
    enqueue(10);
    enqueue(11);
    enqueue(12);
    enqueue(19);
    print();

    dequeue();
    dequeue();

   print();
   dequeue();

    print();
    enqueue(22);
    print();

    return 0;

}








