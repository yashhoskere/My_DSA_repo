#include <iostream>
using namespace std;
#define n 5
class que
{
    int *arr;
    int front = -1;
    int back = -1;

public:
    que()
    {
        arr = new int[n];
    }

    void nque(int val)
    {

        if (front == -1)
        {
            front++;
        }

        if (back != n - 1)
        {
            back++;
            arr[back] = val;
        }
        else
        {
            cout << "Overflow" << endl;
            return;
        }
    }

    void dque()
    {
        if (front == -1 || front > back)
        {
            cout << "underflow" << endl;
            return;
        }
        else
        {
            cout << arr[front] << endl;
            front++;
        }
    }
};

int main()
{

    que q;
    q.nque(1);
    q.nque(2);
    q.nque(3);
    q.nque(4);
    q.nque(4);
    q.nque(4);

    q.dque();
    q.dque();
    q.dque();
    q.dque();
    q.dque();

    return 0;
}