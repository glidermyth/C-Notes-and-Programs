#include<iostream>
using namespace std;

void swapPointer(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapReference(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}
int & swapReferenceVar(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
    return(a);
}

int main(){
    
    int num1,num2;
    cout<<"Enter num1: ";
    cin>>num1;
    cout<<"Enter num2: ";
    cin>>num2;

    //using pointer

    cout<<"The value of num1: "<<num1<<" The value of num2: "<<num2<<endl;
    swapPointer(&num1,&num2);
    cout<<"The value of num1: "<<num1<<" The value of num2: "<<num2<<endl;

    //using reference

    cout<<"The value of num1: "<<num1<<" The value of num2: "<<num2<<endl;
    swapReference(num1,num2);
    cout<<"The value of num1: "<<num1<<" The value of num2: "<<num2<<endl;

    /*******   returning reference         ******/

    cout<<"The value of num1: "<<num1<<" The value of num2: "<<num2<<endl;
    swapReferenceVar(num1,num2) = 56;
    cout<<"The value of num1: "<<num1<<" The value of num2: "<<num2<<endl;
    
    return(0);
}