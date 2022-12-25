#include<iostream>
using namespace std;

int main(){

    //selection control structure
    int age;
    cout<<"Insert your age: ";
    cin>>age;
    if(age<18){
        cout<<"You can not come."<<endl;
    }
    else if(age == 18){
        cout<<"your age is 18"<<endl;
    }
    else if((age>18) && (age<40)){
        cout<<"your age is under 40"<<endl;
    }
    else{
        cout<<"you can come."<<endl;
    }

    //Switch case
    char c;
    cout<<"enter the character: "<<endl;
    cin>>c;
    switch(c){
        case 'a':
            cout<<"character is a"<<endl;
            break;
        case 'b':
            cout<<"character is b"<<endl;
            break;
        case 'c':
            cout<<"character is c"<<endl;
            break;
        case 'd':
            cout<<"character is d"<<endl;
            break;
        default:
            cout<<"Other character"<<endl;
            break;
    }

    return(0);
}