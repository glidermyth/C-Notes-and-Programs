#include<iostream>
using namespace std;

template <class T>
class Base{
    T num;
    public:
        Base(T data){
            cout<<"Constructor called\n";
            num = data;
        }
        T getData();
        void display(){
            cout<<"The number is : "<<num<<"\n";
        }
};

template <typename T>
T Base<T> :: getData(){
    return num;
}

int main()
{
    Base<int> bobj1(23);
    bobj1.display();
    int number = bobj1.getData();
    cout<<"number is: "<<number<<"\n";
    return 0;
}