//stack using class
#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int *Stack = new int[100];
     int Top = 0, MaxSize = 5;
public:
    bool isEmpty()
{
	return (Top == 0);
}

//returns True if stack is full
bool isFull()
{
	return (Top == MaxSize);
}

bool push(int Element)
{
	if( isFull() )
    {
        cout << "Stack is Full\n";
        return false;
    }
 	Stack[ Top++ ] = Element;
 	cout<< Element <<" is inserted into the Stack successfully.\n";
	return true;
}

bool pop()
{
	if( isEmpty() )
    {
        cout << "Stack empty\n";
        return false;
    }
	Top--;
	cout << "Pop operation is performed successfully.\n";
	return true;
}

int topElement()
{
	return Stack[ Top - 1 ];
}

void show()
{
	if(isEmpty())
    {
        cout << "Stack empty\n";
        return;
    }
    cout << "\nStack Elements: ";
	for( int i=Top-1; i>=0; i-- )
	{
        cout << Stack[i] << " ";
	}
	cout<<endl<<endl;
}
};

int main()
{
    Stack s1;                     // Input niye
    int n;
    int element;
    cout<<"Enter the Size :- ";
    cin >>n;

    int *Stack = new int [n];

    for(int i=0;i<n;i++)
    {
        cin>>element;
        s1.push(element);
        s1.show();
    }

s1.pop();
s1.pop();
s1.show();

    /*Stack st
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);
    st.push(10);
    st.show();
    cout<<"\nTop Element of the Stack: " << st.topElement() << endl;

    st.pop();
    st.pop();
    cout<<"\nTop Element of the Stack: " << st.topElement() << endl;
    st.show();

    st.pop();
    cout<<"\nTop Element of the Stack: " << st.topElement() << endl;
    st.show();*/
return 0;
}
