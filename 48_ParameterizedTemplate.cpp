#include<iostream>
using namespace std;

template <class T1=int,class T2=float>
class Main{
    T1 num1;
    T2 num2;
    public:
        Main(T1 data1,T2 data2){
            num1 = data1;
            num2 = data2;
        }
        void display(){
            cout<<"num1: "<<num1<<"\n"<<"num2: "<<num2;
        }
};

int main()
{
    Main<> mainobj(32,64.44);
    Main<char, double> mainobj2('c',54.554);
    mainobj.display();
    mainobj2.display();
    return 0;
}