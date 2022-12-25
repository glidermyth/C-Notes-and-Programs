#include<iostream>
using namespace std;

class two;

class one{
    public:
        void getDataFromTwo(two);
        void setDataOfTwo(two&);
};

class two{
    int a,b;
    public:
        void setData(int a,int b){
            this->a = a;
            this->b = b;
        }
        friend class one;
};

void one :: getDataFromTwo(two t){
    cout<<"value of a: "<<t.a<<"\n";
    cout<<"value of b: "<<t.b<<"\n";
}

void one :: setDataOfTwo(two &t){
    t.a = 7;
    t.b = 8;
}

int main()
{
    two tobj;
    tobj.setData(4,5);
    one oobj;
    oobj.getDataFromTwo(tobj);
    oobj.setDataOfTwo(tobj);
    oobj.getDataFromTwo(tobj);
    return 0;
}