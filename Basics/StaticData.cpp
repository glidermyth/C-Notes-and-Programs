#include<iostream>
using namespace std;

class Employee{
    int id;
    // static int count = 1;    // We can not declare static data variable inline.
    static int count;
public:
    void setData(void){
        cout<<"enter the id: ";
        cin>>id;
        count++;
    }
    void getData(void){
        cout<<"the id of this employee is: ";
        cout<<id<<endl;
        cout<<"this is the count: "<<count<<endl;
    }
}emp1,emp2; // We can also declare class objects like this.

int Employee :: count;//default value of static variable is 0;

int main(){
    
    emp1.setData();
    emp1.getData();
    emp2.setData();
    emp2.getData();
    return(0);
}