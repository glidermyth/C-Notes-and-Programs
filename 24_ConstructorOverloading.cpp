#include<iostream>
using namespace std;

class PrintData{
private:
    int a,b;
public:
    PrintData(){
        a=0;
        b=0;
    }
    PrintData(int x,int y=6){
        a=x;
        b=y;
    }
    void showData(void){
        cout<<"value of a: "<<a<<endl;
        cout<<"value of b: "<<b<<endl;
    }
};

int main(){
    PrintData obj1;
    PrintData obj2 = PrintData(32,64);
    PrintData obj3(64);
    obj1.showData();
    obj2.showData();
    obj3.showData();
}