#include<iostream>
using namespace std;



class temp
{
    int height;
    char * name;
public:


//constructor with one parameter
     temp(int height )
    {
            this->height = height; 
    }


// constructor with 2 parameters (function overloading)
    temp(int height , char name)
    {
            this->height = height;
            *(this->name) = name;
    }


//copy constructor

    // temp (temp t1)
    // {
    //     this->height = t1.height;
    //     this->name = t1.name;
    //     cout<<"this is copy constructor and its values are "<< this->height<<" "<<this->name<<" ";
    // }

//Setter functions
    int set_height(int x)
    {
        height = x;
    }

    char set_name(char x)
    {
        *name = x;
    }


// getter functions 
    void get_height()
    {
        cout<<this->height<<" ";
    }

    void get_name()
    {
        cout<<name<<" ";
    }

};


int main()
{

temp t1(6);
temp* t2 = new temp(42,'X');
    t1.set_height(5);
    t1.set_name('Y');
    t1.get_height();
    t1.get_name();
    t2->get_height();
    t2->get_name();

temp t3_copy(t1);

t1.set_name('p');
t1.get_name();
t3_copy.get_name();
   

return 0;

}