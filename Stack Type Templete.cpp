
// Stack Using Template

#include<bits/stdc++.h>
using namespace std;

template <typename type>

class Stack {
private:
    int top;
    type* a;
    int s;
public:
    Stack(int n)
    {
        top = -1;
        s = n;
        a = new type[n];
    }

    bool isFull()
    {
        if (top == s - 1)
        {
            return true;
        }
        return false;
    }

    bool isEmpty()
    {
        if (top < 0)
        {
            return true;
        }
        return false;

    }

    void push(int data)
    {

        if (isFull())
        {
            cout << "Stack Overflow" << endl;
        }
        else
        {
            top = top + 1;
            a[top] = data;
        }
    }

    type pop()
    {

        if (isEmpty()) {
            cout << "Stack is empty" << endl;
        }
        else
        {
            int value = a[top];
            top = top - 1;
            return value;
        }
    }

    void printElements()
    {
        cout << "Stack Elements: ";
        for (int i = top; i >= 0; i--)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
};

int main() {

    int Size, i;
    double Element;
    cout << "Enter the Size of the List: ";
    cin >> Size;
    Stack <double> value(Size);

    cout << "Enter The Data Of The List: ";
    for (i = 0; i <= Size; i++)
    {
        cin >> Element;
        value.push(Element);
    }
    value.printElements();
value.pop();
value.printElements();

return 0;
}
