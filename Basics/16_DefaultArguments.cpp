#include<iostream>
using namespace std;

float moneyReceived(int currMoney,int factor = 5){  //default argument
    return(currMoney*factor);
}

int display(const int money){   // Constant argument
    // money = 564;   //This statement will not run as the money variable is constant;
    return money;
}

int main(){
    
    int money,factor;
    cout<<"Enter money and factor: "<<endl;
    cin>>money>>factor;
    cout<<"the current money: "<<money<<"\nmoney after one year: "<<moneyReceived(money)<<endl;
    cout<<"the current money: "<<money<<"\nmoney after one year: "<<moneyReceived(money,factor)<<endl;
    
    cout<<"The money in the display function is: "<<display(money)<<endl;

    return(0);
}