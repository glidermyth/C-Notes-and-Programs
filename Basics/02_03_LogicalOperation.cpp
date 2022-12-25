#include<iostream>
using namespace std;

int main(){

    int num1,num2;
    cout<<"enter 1st number: ";
    cin>>num1;
    cout<<"enter 2nd number: ";
    cin>>num2;
    bool result1 = (num1<num2)&&(num1<=num2);
    bool result2 = (num1<num2)||(num1>num2);
    bool result3 = !(num1<num2);
    cout<<"the result1 is: "<<result1;
    cout<<"the result2 is: "<<result2;
    cout<<"the result3 is: "<<result3;
    return 0;
}