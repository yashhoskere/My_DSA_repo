#include<iostream>

using namespace std ;


class example
{ 
public:
    
    virtual void display()
    {
        cout<<"I am parent"<<endl;
    }

    

};


int main()
{
    child ch;
    example ex;
    example * ptr;

    ptr = &ch;
    ptr->display();
   

  return 0;
}