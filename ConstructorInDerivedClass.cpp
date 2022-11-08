#include<iostream>
using namespace std;

class Base1{
    int data1;
    public:
        Base1(int i){
            data1 = i;
            cout<<"Base1 class constructor called\n";
        }
        void printData(){
            cout<<"The value of data is: "<<data1<<"\n";
        }
};

class Base2{
    int data2;
    public:
        Base2(int i){
            data2 = i;
            cout<<"Base2 class constructor called\n";
        }
        void printData(){
            cout<<"The value of data is: "<<data2<<"\n";
        }
};

class Derived : public Base1, public Base2{
    int derivedData1, derivedData2;
    public:
        Derived(int a,int b,int c,int d) : Base1(c), Base2(d){
            derivedData1 = a;
            derivedData2 = b;
            cout<<"Derived class constructor called.\n";
        }
        void PrintDerivedData(){
            cout<<"The data are: "<<derivedData1<<", "<<derivedData2<<"\n";
        }
};

int main()
{
    Derived dobj(22,33,44,55);
    dobj.PrintDerivedData();
    return 0;
}