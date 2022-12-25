#include<iostream>
using namespace std;

int sum(int a,int b){
    return(a+b);
}
int sum(int a,int b,int c){
    return(a+b+c);
}

int main(){
    
    int num1,num2,num3;
    cout<<"Enter the three numbers: ";
    cin>>num1>>num2>>num3;
    cout<<"the sum of num1 and num2 is: "<<sum(num1,num2)<<endl;
    cout<<"the sum of num1, num2 and num3 is: "<<sum(num1,num2,num3)<<endl;
    return(0);
}