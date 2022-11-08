#include<iostream>

using std::cout;

int main()
{
    int a=5,b=6;
    cout<<"Bitwise and operator: "<<(a & b)<<"\n";
    cout<<"Bitwise or operator: "<<(a | b)<<"\n";
    cout<<"Bitwise xor operator: "<<(a ^ b)<<"\n";
    cout<<"Left-shift operator: "<<(a<<2)<<"\n";
    cout<<"right-shift operator: "<<(a>>2)<<"\n";
    cout<<"bitwise-not operator: "<<(~a)<<"\n";
    return 0;
}