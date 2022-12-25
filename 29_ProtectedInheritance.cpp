#include<iostream>
using namespace std;

class Base{
    private:
        int ap;
    protected:
        int bp;
    public:
        int cp;
        Base(){
            ap = 1;
            bp = 2;
            cp = 3;
        }
        void showData();
};

class Derived : protected Base{
    int dp;
    public:
        Derived(){
            dp = 4;
        }
        void display();
};

void Base :: showData(void){
    cout<<"ap : "<<ap<<"\n";
    cout<<"bp : "<<bp<<"\n";
    cout<<"cp : "<<cp<<"\n";
}

void Derived :: display(){
    cout<<"bp : "<<bp<<"\n";
    cout<<"cp : "<<cp<<"\n";
    cout<<"dp : "<<dp<<"\n";
}

int main(){
    Base bobj;
    bobj.showData();
    Derived dobj;
    // dobj.showData();
    // The above line will not execute as we have derived the class with protected priviledges
    dobj.display();
    return 0;
}

/*
                    private derivation  public derivation   protected derivation
private members     not inherited       not inherited       not inherited  

protected members   private             protected           protected

public members      private             public              protected

*/