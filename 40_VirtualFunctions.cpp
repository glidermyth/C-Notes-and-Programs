#include<iostream>
using namespace std;

class Base{
    protected:
        int num1,num2;
    public:
        Base(int a,int b){
            num1 = a;
            num2 = b;
        }
        virtual void display(){
            cout<<"Base class display called\n";
        }
};

class Derived : public Base{
    int num3;
    public:
        Derived(int a,int b,int c) : Base(a,b){
            num3 = c;
        }
        void display(){
            cout<<"Derived class display called\n";
        }
};

int main()
{
    Base *bptr[2];
    Base bobj(5,6);
    Derived dobj(4,5,6);
    bptr[0] = &bobj;
    bptr[1] = &dobj;
    bptr[0]->display();
    bptr[1]->display();
    return 0;
}