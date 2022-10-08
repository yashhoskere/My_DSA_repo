#include<iostream>

using namespace std ;


class example
{ 
private:

int a , b ;

public:
    example(int a , int b)
    {
        this->a = a;
        this->b = b;
    }
    virtual void display()
    {
        cout<<"I am parent"<<endl;
    }


    friend void func(example);

    void member_func(int ,int);

};

void func(example e)
{
    cout<<e.a<<" and the other is "<<e.b<<" Thats all ";
}


void example :: member_func(int a, int b)
{
    cout<<"I am a memeber function"<<a+b;
}

int main()
{
    example e1(2,3);
    example e2(5,6);

    func(e1);
    e1.member_func(12,9);

  return 0;
}