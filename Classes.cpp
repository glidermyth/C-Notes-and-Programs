#include<iostream>
using namespace std;

class Numbers{
    private:
        int a,b,c;
    public:
        int d,e;
        void setData(int a,int b,int c);
        void getData(){
            cout<<"The value of a: "<<a<<endl;
            cout<<"The value of b: "<<b<<endl;
            cout<<"The value of c: "<<c<<endl;
            cout<<"The value of d: "<<d<<endl;
            cout<<"The value of e: "<<e<<endl;
        }
};

void Numbers :: setData(int a1,int b1,int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){

    int num1,num2,num3;
    cout<<"Enter the value of three numbers: ";
    cin>>num1>>num2>>num3;
    Numbers obj;
    obj.setData(num1,num2,num3);
    cout<<"Enter the value of another two number: ";
    cin>>obj.d>>obj.e;
    obj.getData();
    return(0);
}