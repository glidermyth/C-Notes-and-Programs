#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter the number: ";
    cin>>num;
    int* ptr = &num;
    cout<<"The value of the number using pointer is: "<<*ptr<<"\n";
    int* p = new int(24);
    cout<<"The pointer value is: "<<*p<<" and address is: "<<p<<'\n';
    int *arr = new int[3];
    arr[0] = 21;
    arr[1] = 22;
    arr[2] = 23;
    cout<<"The array value are: "<<arr[0]<<"\n";
    cout<<"The array value are: "<<arr[1]<<"\n";
    cout<<"The array value are: "<<arr[2]<<"\n";
    *(arr+1) = 25;
    cout<<"The array value are: "<<arr[1]<<"\n";
    cout<<(arr+1);
    delete[] arr;
    return 0;
}