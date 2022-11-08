#include<iostream>
using namespace std;

class Shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
public:
    void initCounter(void){
        counter=0;
    }
    void displayPrice(void);
    void setPrice(void);
};

void Shop :: setPrice(void){
    cout<<"Enter id of your item: ";
    cin>>itemId[counter];
    cout<<"Enter price of your item: ";
    cin>>itemPrice[counter];
    counter++;
}

void Shop :: displayPrice(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"item id: "<<itemId[i]<<" price of item: "<<itemPrice[i]<<endl;
    }
    
}

int main(){
    
    Shop ss;
    ss.initCounter();
    ss.setPrice();
    ss.setPrice();
    ss.setPrice();
    ss.displayPrice();
    return(0);
}