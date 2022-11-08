#include<iostream>
using namespace std;

int main(){
    
    //arrays
    int marks[4] = {25,54,41,87};
    cout<<"marks[0]: "<<marks[0]<<endl;
    cout<<"marks[1]: "<<marks[1]<<endl;
    cout<<"marks[2]: "<<marks[2]<<endl;
    cout<<"marks[3]: "<<marks[3]<<endl;
    marks[2] = 89;
    cout<<"marks[2]: "<<marks[2]<<endl;

    //array traversing using loop
    for(int i=0;i<4;i++){
        cout<<"marks: "<<marks[i]<<endl;
    }
/*
    int mathmarks[6];
    //array input using loop
    for(int i=0;i<6;i++){
        cin>>mathmarks[i];
    }
    //displaying array
    for(int i=0;i<6;i++){
        cout<<"mathmarks: "<<mathmarks[i]<<endl;
    }
*/
    //pointers and arrays
    int *p = marks;
    cout<<"the value of marks[0] is: "<<*p<<endl;
    cout<<"the value of marks[1] is: "<<*(p+1)<<endl;
    cout<<"the value of marks[2] is: "<<*(p+2)<<endl;
    cout<<"the value of marks[3] is: "<<*(p+3)<<endl;

    cout<<*p<<endl;
    cout<<*(p++)<<endl;
    cout<<*p<<endl;

    return(0);
}