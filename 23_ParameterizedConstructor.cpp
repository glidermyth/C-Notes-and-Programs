#include<iostream>
using namespace std;

class Add{
    private:
        int a,b;
    public:
        Add(int,int);
        void showData(void);
};

Add :: Add(int x, int y){       //This is parameterized constructor
    a=x;
    b=y;
}

void Add :: showData(void){
    cout<<"value of a: "<<a<<endl;
    cout<<"value of b: "<<b<<endl;
}

int main(){
    Add obj = Add(32,54);
    Add objNew(23,44);
    obj.showData();
    objNew.showData();
    return 0;
}