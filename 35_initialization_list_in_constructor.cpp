#include<iostream>

using std::cout;
using std::cin;

class Test{
    int a;
    int b;
    public:
        // Test(int i,int j) : a(i), b(j){
        //     cout<<"Constructor called\n";
        //     cout<<"Value of a : "<<a<<"\n";
        //     cout<<"Value of b : "<<b<<"\n";
        // }
        // Test(int i,int j) : a(i), b(a+j){
        //     cout<<"Constructor called\n";
        //     cout<<"Value of a : "<<a<<"\n";
        //     cout<<"Value of b : "<<b<<"\n";
        // }
        // Test(int i,int j) : b(j), a(b+i){   // --> This line will create problem as we have declared a first and then b
        //     cout<<"Constructor called\n";   //     so if we want to use initialization list we have to use the variables in order
        //     cout<<"Value of a : "<<a<<"\n"; //     first a and then b;
        //     cout<<"Value of b : "<<b<<"\n";
        // }
};

int main()
{
    // Test t1(2,3);
}