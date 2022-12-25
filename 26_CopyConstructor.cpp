#include<iostream>
using namespace std;

class Number{
    int num;
    public:
        Number(){
            num=0;
        }
        Number(int a){
            num =a;
        }
        // When no copy constructor is found,compiler supplies it's own copy constructor
        // Number(Number &obj){
        //     cout<<"Copy Constructor called"<<endl;
        //     num = obj.num;
        // }
        void show(){
            cout<<"The number is: "<<num<<endl;
        }
};

int main(){
    Number x,y,z(64);
    // x.show();
    // y.show();
    // z.show();
    Number z1(z);
    z1.show();
    // Number z2;
    // z2 = z; //Copy construntor will not be invoked; This will not invoke copy constructor because the declaration and assignment or invocation statements are on seperate lines;
    Number z3 = z;//Copy Constructor will be invoked;
    return 0;
}