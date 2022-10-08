#include<iostream>

using namespace std ;


class cpy_constr
{
    int a;
    int b;
public:
    int *p ;
    
    void display()
    {
        // cout<<" yes"<<endl;
        cout<<a<<" "<<b<<" "<<*p<<" "<<endl;
    }
    cpy_constr()
    {
        
        p = new int;
   
    }

    void setdata(int a ,int b , int c)
    {
            this->a = a;
            this->b = b;
            *p = c;
    }

    cpy_constr(cpy_constr & dum)
    {
        a = dum.a;
        b = dum.b;
        p = new int;
        *p = *(dum.p);
    }


};

int main()
{
  
cpy_constr p1;
p1.setdata(1,2,3);
cpy_constr p2= p1;
// p1.s(1,2,3);

   p1.display();
   p2.display();

* (p1.p) =5;


p1.display();
   p2.display();
   


  return 0;
}