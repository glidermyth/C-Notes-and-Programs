#include<iostream>
using namespace std;

int c=56;

int main(){

    int a=5,b=4,c;
    c = a+b;
    cout<<"the value of local c: "<<c<<endl;
    cout<<"the value of global c: "<<::c<<endl;

    float d = 23.32f;
    long double e = 56.25L;
    cout<<"the value of d is: "<<d<<endl<<"the value of e is: "<<e<<endl;

    cout<<"the size of 34.4 is: "<<sizeof(34.4)<<endl;
    cout<<"the size of 34.4f is: "<<sizeof(34.4f)<<endl;
    cout<<"the size of 34.4F is: "<<sizeof(34.4F)<<endl;
    cout<<"the size of 34.4l is: "<<sizeof(34.4l)<<endl;
    cout<<"the size of 34.4L is: "<<sizeof(34.4L)<<endl;

    // Reference Variables

    float var1 = 45;
    float &var2 = var1;

    cout<<var1<<endl;
    cout<<var2<<endl;

    //  Typecasting

    int aa = 45;
    float bb = 54.28;
    cout<<"value of aa is: "<<aa<<endl;
    cout<<"value of aa is: "<<(float)aa<<endl;
    cout<<"value of bb is: "<<bb<<endl;
    cout<<"value of bb is: "<<(int)bb<<endl;

    int cc = int(bb);
    cout<<"the value of cc is: "<<cc<<endl;

    return 0;
}
