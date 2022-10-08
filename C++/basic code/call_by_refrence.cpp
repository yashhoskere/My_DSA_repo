#include<iostream>
using namespace std;

int swap(int* , int*);
int main(){
    int a = 10;
    int b = 30;
    int *c = &a;
    int *d = &b;
    swap(c, d);
    cout<<a<<b;
    return 0;
}
int swap(int *a , int *b){
    int temp = *b;
    *b=*a;
    *a= temp;
}