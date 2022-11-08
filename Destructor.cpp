#include<iostream>
using namespace std;

int count=0;

class num{
    public:
        num(){
            count++;
            cout<<"Constructor called. -> "<<count<<endl;
        }

        ~num(){
            cout<<"Destructor called. -> "<<count<<endl;
            count--;
        }
};

int main(){
    cout<<"We are inside the main function"<<endl;
    cout<<"creating first object n1"<<endl;
    num n1;
    { // creating a block
        cout<<"Entering this block";
        cout<<"Creating two more objects"<<endl;
        num n2,n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}