#include<iostream>
using namespace std;

int main(){

    //for loop
    /*
    for(initialization;condition;updation){
        loop body
    }
    */
    int i;
    for(i=0;i<10;i++){
        cout<<"value of i: "<<i<<endl;
    }
    for(int l=10;l>=0;l--){
        cout<<"value of l: "<<l<<endl;
    }

    //while loop
    int j=0;
    while(j<20){
        cout<<"Value of j: "<<j<<endl;
        j++;
    }

    //do-while loop
    int k=20;
    do{
        cout<<"value of k: "<<k<<endl;
        k--;
    }while(k>0);

    return(0);
}