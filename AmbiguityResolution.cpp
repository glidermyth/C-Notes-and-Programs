#include<iostream>
using namespace std;

class Base1{
    public:
        void greet(){
            cout<<"How are you from base1.\n";
        }
};
class Base2{
    public:
        void greet(){
            cout<<"How are you from base2.\n";
        }
};
class Derived : public Base1, public Base2{
    int a;
    public:
        void greet(){
            Base1 :: greet();
        }
};

int main()
{
    Base1 base1obj;
    base1obj.greet();
    Base2 base2obj;
    base2obj.greet();
    Derived dobj;
    dobj.greet();
    return 0;
}