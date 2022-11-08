#include<iostream>
using namespace std;

class TestX{
int a,b;
public:
    TestX(){
        a = 0;
        b = 0;
    }
    TestX(int num1,int num2){
        a = num1;
        b = num2;
    }
    void displayData(){
        cout<<"The value of a: "<<a<<endl;
        cout<<"The value of b: "<<b<<endl;
    }
};

int main(){
    
    TestX obj1; //Implicit call
    TestX obj2 = TestX(11,24);  //Explicit call
    obj1.displayData();
    obj2.displayData();
    return(0);
}