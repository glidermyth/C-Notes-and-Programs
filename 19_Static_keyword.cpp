#include<iostream>

using std::cout;
using std::cin;

void demo(void)
{
    static int count = 0;   // static variable
    int count_new = 0;      // normal integer variable

    cout<<"Static variable : "<<(count++)<<"\n";
    cout<<"Normal variable : "<<(count_new++)<<"\n";
}

class Demo{

    public:
        static int i;   // We can not declare and instantiate the static variable on the same line inside the class.
        // so we have to use scope resolution operator outside the class to instantiate it.

        static void printMsg(void)
        {
            cout<<"Hello from static function\n";
        }
};

int Demo :: i = 2;

int main()
{
    /***** static variables in a function *****/
    // for(int i=0;i<5;i++)
    // {
    //     demo();
    // }

    /***** static variable inside a class *****/
    // Demo d1;
    // cout<<"i inside class : "<<d1.i<<"\n";

    /***** static function inside a class *****/
    Demo :: printMsg();
}