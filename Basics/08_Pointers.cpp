#include<iostream>
using namespace std;

int main(){
    
    //pointer --> data type which holds the address of other data types
    int a = 32;
    int* b = &a;    // & --> (address of) operator
    cout<<"The address of a is: "<<&a<<endl;
    cout<<"The address of a is: "<<b<<endl;

    cout<<"The value at b is: "<<*b<<endl;  // * --> (value at), dereference operator

    //pointer to pointer
    int** c = &b;
    cout<<"The address of b is: "<<&b<<endl;
    cout<<"The address of b is: "<<c<<endl;

    cout<<"The value of b is: "<<*b<<endl;
    cout<<"The value of b is: "<<**c<<endl;
    cout<<"The value of a is: "<<*c<<endl;

    return(0);
}