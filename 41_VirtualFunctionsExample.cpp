#include <iostream>

using std::cin;
using std::cout;

class Base
{
private:
    int a = 1;

public:
     void show()
    {
        cout << "Printed inside Base class\n";
        cout << "The value of a : " << a << "\n";
    }
};

class Derive : public Base
{
public:
    void show()
    {
        cout << "Printed inside the Derive class\n";
    }
};

int main()
{
    // Base *bptr;
    // Base bobj;
    // Derive dobj;
    // bptr = &bobj;
    // bptr = &dobj;   

    // bptr->show();   // This line will call the show() of Base class as we have not declared the show() of Base class as virtual.
                    // That is why the function overriding will not happen now.
                    // But if we declare the Base class show() as virtual then the bptr will point to the show() of Derive class.

    Derive dobj;
    dobj.show();    
}