#include <bits/stdc++.h>
using namespace std;

template <typename type>

class Queue
{
private:
    int max_Size;
    type* List;
    int Front;
    int Rear;

public:
    Queue()
    {
        max_Size = 5;
        List = new type[max_Size];
        Front = -1;
        Rear = -1;
    }

    Queue(int max_Size)
    {
        this -> max_Size = max_Size;
        List = new type[max_Size];
        Front = -1;
        Rear = -1;
    }

    bool isFull()
    {
        if(Rear == max_Size - 1)
        {
            return true;
        }
        return false;
    }

    bool isEmpty()
    {
        if((Front == -1) && (Rear == -1))
        {
            return true;
        }
        return false;
    }

    bool Enqueue(type Element)
    {
        if(isFull())
        {
            cout<< "List Is Already Full\n";
        }
        else if(isEmpty())
        {
            Front = Rear = 0;
            List[Front] = Element;
            cout<< Element << " Has Been Inserted In The List\n";
        }
        else
        {
            Rear = Rear + 1;
            List[Rear] = Element;
            cout << Element << " Has Been Inserted In The List\n";
        }
    }

    type Dequeue()
    {
        if(isEmpty())
        {
            cout << "List Is Already Empty\n";
        }
        else if(Front == Rear)
        {
            Front = Rear = -1;
            cout << "\nDequeue Has Been Done Successfully\n";
        }
        else
        {
            Front = Front + 1;
            cout << "\nDequeue Has Been Done Successfully";
        }
    }

    void printElements()
    {
        int i;
        cout << "\n\nList Elements Are: ";
        for(i = Front; i <= Rear; i++)
        {
            cout << List[i] << " ";
        }
    }

    type frontElement()
    {
        return List[Front];
    }

    type rearElement()
    {
        return List[Rear];
    }

    ~Queue()
    {
        delete[] List;
    }
};

int main()
{
    int Size, i;
    string Element;
    cout << "Enter the Size of the List: ";
    cin >> Size;

    Queue <string> value(Size);           // value is object

    cout << "Enter The Data Of The List: ";
    for(i = 0; i <= Size; i++)
    {
        cin >> Element;
        value.Enqueue(Element);
    }
    value.printElements();

    value.Dequeue();
    value.printElements();

cin.get();
return 0;
}
