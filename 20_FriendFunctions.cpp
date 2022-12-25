#include<iostream>
using namespace std;

class X;
class Y;

class X{
private:
    int a;
public:
    void getDataFromY(Y);
    void setData(int num);
    void getData();
};

class Y{
private:
    int b;
public:
    void setData(int num){
        b = num;
    }
    friend void X :: getDataFromY(Y);
};

void X :: setData(int num){
    a = num;
}
void X :: getData(){
    cout<<"The value of a is: "<<a<<endl;
}
void X :: getDataFromY(Y obj){
    cout<<"The value of b is: "<<obj.b<<endl;
}

int main(){
    
    X xobj;
    Y yobj;
    xobj.setData(16);
    yobj.setData(36);
    xobj.getData();
    xobj.getDataFromY(yobj);
    return(0);
}