#include<iostream>
using namespace std;

int main(){
    
    //break statement
    for(int i=0;i<10;i++){

        if(i==4){
            break;
        }
        cout<<"value of i: "<<i<<endl;

    }

    //continue statement
    for(int i=0;i<10;i++){

        if(i==4){
            continue;
        }
        cout<<"value of i: "<<i<<endl;

    }
    return(0);
}