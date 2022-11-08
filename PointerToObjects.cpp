#include<iostream>
using namespace std;

class Number{
    int num;
    public:
        void setData(int data){
            num = data;
        }
        void getData(void){
            cout<<"The value is: "<<num<<"\n";
        }
};

int main()
{
    Number nobj;
    nobj.setData(32);
    nobj.getData();
    Number* ptr = &nobj;
    (*ptr).setData(64);
    (*ptr).getData();
    ptr->setData(41);
    ptr->getData();
    Number* p = new Number;
    p->setData(76);
    p->getData();
    return 0;
}