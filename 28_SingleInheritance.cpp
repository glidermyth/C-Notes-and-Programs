#include<iostream>
using namespace std;

class Base{
int a,b;
public:
    int c;
    Base(){}
    Base(int x,int y,int z){
        a=x;
        b=y;
        c=z;
    }
    void showData(){
        cout<<"a : "<<a<<endl;
        cout<<"b : "<<b<<endl;
        cout<<"c : "<<c<<endl;
    }
};

class Derived : public Base{ //class derived publically; // Default visibility mode is private
    int d;                                               // class Derived : Base --> Inhetiting privately
    public:
        Derived(){
            d=32;
        }
        void showData(){
            cout<<"c : "<<c<<endl;
            cout<<"d : "<<d<<endl;
        }
};

int main(){
    Base b(12,21,51);
    b.showData();
    Derived d;
    d.showData();
    return 0;
}