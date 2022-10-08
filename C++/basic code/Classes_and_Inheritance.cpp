#include<iostream>
#include<math.h>
using namespace std;

void final();
void input(int , int);
class calculator{
    int a;
    int b;
    friend void complex_cal();
    public :
        void input(int x, int y);
        void final();
};

void calculator :: input(int x,int y){
       a = x;
       b = y;

}

void calculator :: final(){
       cout<<"Addition is:"<<a+b<<endl;
       cout<<"subtraction is:"<<a-b<<endl;

}

class complex_cal : public calculator{
       public:
              void sin(void){
                     cout<<"sin of a and b are :"<<sin(a)<<", "<<sin(b)<<endl;                     
              }
};

int main(){
calculator jack;
complex_cal cal;
jack.input(5,3);
jack.final();
cal.sin();

return 0;
}