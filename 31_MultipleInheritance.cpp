#include<iostream>
using namespace std;

class Base1{
    protected:
        int base1int;
    public:
        void set_base1int(int a){
            base1int = a;
        }
};

class Base2{
    protected:
        int base2int;
    public:
        void set_base2int(int a){
            base2int = a;
        }
};

class Derived : public Base1, public Base2{
    public:
        void show(){
            cout<<"The value of Base1 int is: "<<base1int<<"\n";
            cout<<"The value of Base2 int is: "<<base2int<<"\n";
            cout<<"The sum of these values are: "<<(base1int+base2int)<<"\n";
        }
};

int main()
{
    Derived dobj;
    dobj.set_base1int(32);
    dobj.set_base2int(64);
    dobj.show();
    return 0;
}