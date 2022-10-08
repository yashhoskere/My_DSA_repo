#include <iostream>
#include <string>

using namespace std;
#define n 100

class Stack
{
    int *arr;
    int top;

public:
    Stack()
    {
        arr = new int[n];
        top = -1;
    }

    int push(int data)
    {
        if (top == n - 1)
        {
            cout << "Overflow" << endl;
            return -1;
        }
        else
        {
            top++;
            arr[top] = data;
        }
    }
    int pop()
    {
        if (top == -1)
        {
            cout << "Underflow" << endl;
            return -1;
        }
        else
        {
            top--;
        }
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "Underflow" << endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }

    bool empty()
    {
        if (top == -1)
        {
            return true;
        }
    }
};

int main()
{
    Stack st;

    st.push(5);
    st.push(54);
    st.push(56);
    st.push(85);
    st.empty();
    cout << st.Top() << endl;
    st.pop();
    st.pop();
    cout << st.Top() << endl;

    return 0;
}