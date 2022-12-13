//Queue Class

#include <iostream>
using namespace std;

class Queue
{
public:
    int Queue[10];
    int front = -1, rear = -1;
    int MaxSize = 10;

public:
    bool isEmpty()
{
	if ((front == -1) && (rear == -1))
	{
		return true;
	}
	return false;
}

bool isFull()
{
	if (rear == MaxSize - 1)
	{
		return true;
	}
	return false;
}

bool Enqueue(int element)
{
	if (isFull())
	{
		cout << "Queue is Full Or Overflow\n";
	}
	else if (isEmpty())
	{
		front = rear = 0;
		Queue[front] = element;
		cout << element << " has been inserted in the queue\n";
		return true;
	}
	else
	{
		rear = rear + 1;
		Queue[rear] = element;
		cout << element << " has been inserted in the queue\n";
		return true;
	}
}

bool Dequeue()
{
	if (isEmpty())
	{
		cout << "Queue is empty Or Underflow\n";
	}
	else if (front == rear)
	{
		front = rear = -1;
		cout << "Dequeue has been done successfully\n";
		return true;
	}
	else
	{
		front++;
		cout << "Dequeue has been done successfully\n";
		return true;
	}
}

void printValues()
{
	if (isEmpty())
	{
		cout << "Queue is empty\n";
	}

	cout << "Queue elements are: ";
	for (int i = front; i <= rear; i++)
	{
		cout << Queue[i] << " ";
	}
}

int frontElement()
{
	return Queue[front];
}

int rearElement()
{
	return Queue[rear];
}
};


int main()
{
    Queue q;
	q.Enqueue(10);
	q.Enqueue(11);
	q.Enqueue(12);
	q.Enqueue(13);
	q.Enqueue(14);
	q.Enqueue(15);
	q.printValues();
	cout << "\n";

	cout << q.frontElement() << " is the front element\n";
	cout << q.rearElement() << " is the rear element\n";

	q.Dequeue(); q.Dequeue(); q.Dequeue();

	q.printValues();
	cout << "\n";

	cout << q.frontElement() << " is the front element\n";
	cout << q.rearElement() << " is the rear element\n";

cin.get();
return 0;
}
