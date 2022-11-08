#include<iostream>
using namespace std;

class Base{
    int a;
    public:
        virtual void setData(int num){
            a = num;
            cout<<"From base obj\n";
        }
        virtual void display(){
            cout<<"The value of the number is: "<<a<<"\n";
            cout<<"From base obj\n";
        }
};

class Derived : public Base{
    int b;
    public:
        void setData(int num){
            b = num;
            cout<<"From derived obj\n";
        }
        void display(){
            cout<<"The value of the number is: "<<b<<"\n";
            cout<<"From derived obj\n";
        }
};

int main()
{
    Base *bptr,bobj;
    *bptr = bobj;
    bptr->setData(9);
    bptr->display();
    Derived dobj;
    Base *ptr;
    ptr = &dobj;
    ptr->setData(45);
    ptr->display();
    return 0;
}