#include<iostream>
using namespace std;

class Bank{
    int principal,year;
    float rate,returnValue;
    public:
        Bank(){};
        Bank(int p,int y,float r);
        Bank(int p,int y,int r);
        void show();
};

Bank :: Bank(int p,int y,float r){
    principal = p;
    year = y;
    rate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+rate);
    }
    
}

Bank :: Bank(int p,int y,int r){
    principal = p;
    year = y;
    rate = float(r)/100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue = returnValue * (1+rate);
    }
    
}

void Bank :: show(){
    cout<<"principal amount is: "<<principal<<endl<<"Interest rate is: "<<rate<<endl
        <<"return amount is: "<<returnValue<<endl;
}

int main(){
    Bank b1,b2,b3;
    int p,y,R;
    float r;
    cout<<"Enter the value of p, y and r: "<<endl;
    cin>>p>>y>>r;
    b1 = Bank(p,y,r);
    b1.show();
    cout<<"Enter the value of p, y and R: "<<endl;
    cin>>p>>y>>R;
    b2 = Bank(p,y,R);
    b2.show();
    b3.show();
    return 0;
}