#include<iostream>
using namespace std;

class Base{
    int num;
    public:
        void setData(){
            cout<<"Enter the number: ";
            cin>>num;
        }
        void getData(){
            cout<<"The number is: "<<num<<"\n";
        }
};

int main()
{
    Base *ptr = new Base[3];
    for (int i = 0; i < 3; i++)
    {
        ptr -> setData();
        ptr -> getData();
        ptr++;
    }
    
    return 0;
}