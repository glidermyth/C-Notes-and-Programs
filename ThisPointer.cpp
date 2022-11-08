#include<iostream>
using namespace std;

class Base{
    int a;
    public:
        Base& setData(int a){
            this->a = a;    //this is a keyword which is a pointer which points to the object that invokes the member function;
            return *this;
        }
        void getData(){
            cout<<"The value is: "<<a<<"\n";
        }
};

int main()
{
    Base bobj;
    bobj.setData(11);
    bobj.getData();
    bobj.setData(32).getData();
    return 0;
}