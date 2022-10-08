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


class child  : public example{
    public:

    void display()
    {
        cout<<"i am the child"<<endl;
    }
};



class cpy_constr
{
    int a;
    int b;
    int * p ;
    p = (*int)malloc(1*sizeof(int));
public:
    
    virtual void display()
    {
        cout<<"I am parent"<<endl;
    }
    cpy_constr(int a,int b, int c)
    {
        this->a = a;
        this->b = b;
        *p = c;
    }

    cpy_constr(cpy_constr & dum)
    {
        a = dum.a;
        b = dum.b;
        int *p = dum.p;
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