#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    //constants
    const float PI = 3.14;
    cout<<"value of PI is: "<<PI<<endl;

    //manipulators
    int a=5,b=21,c=846;
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
    cout<<"The value of c is: "<<c<<endl;
    cout<<"The value of a with setw() is: "<<setw(4)<<a<<endl;
    cout<<"The value of b with setw() is: "<<setw(4)<<b<<endl;
    cout<<"The value of c with setw() is: "<<setw(4)<<c<<endl;

    return(0);
}