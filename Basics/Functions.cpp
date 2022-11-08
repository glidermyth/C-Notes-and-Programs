#include<iostream>
using namespace std;

//function prototype
int sum(int a,int b);   
//int sum(int,int)  --> we can also write like this;

int main(){

    int num1,num2;
    cout<<"enter 1st number: ";
    cin>>num1;
    cout<<"enter 2nd number: ";
    cin>>num2;
    cout<<"The result is: "<<sum(num1,num2);
    return(0);
}

int sum(int a,int b){
    int result = a+b;
    return result;
}