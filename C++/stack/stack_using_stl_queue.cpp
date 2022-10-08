#include <iostream>
#include <queue>
using namespace std;

class stack
{

 public:
    queue<int> q1, q2;

    void Push(int val)
    {
        if (q1.empty() == true) // if q1 is empty then simply push
        {
            q1.push(val);
        }
        else
        {
            while (q1.empty() == false) // if q1 is not empty then first push all the elements into q2 and then push an element into  //q1 and put everything back from q2 to q1
            {
                q2.push(q1.front());
                q1.pop();
            }
            q1.push(val);

            while (q2.empty() == false)
            {
                q1.push(q2.front());
                q2.pop();
            }
        }
    }
    void Pop()
    {
        if (q1.empty() == true)
        {
            cout << "stack underflow"<<endl;
        }
        else
        {
            q1.pop();
        }
    }
    void Top()
    {
        if (q1.empty() == true)
        {
            cout<<"stack underflow"<<endl;
            return;
        }

        cout << q1.front()<<" ";
    }
};

int main()
{
    stack s;
    s.Push(1);
    s.Push(2);
    s.Push(3);
    s.Push(4);
    s.Push(5);

    s.Top();
    s.Pop();
    s.Top();

    return 0;
}