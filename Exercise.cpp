#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator{
    protected:
        double num1,num2,result;
    public:
        void takeInput();
        void addition();
        void substraction();
        void multiplication();
        void division();
};

void SimpleCalculator :: takeInput(){
    cout<<"Enter the two number: ";
    cin>>num1>>num2;
}
void SimpleCalculator :: addition(){
    result = num1 + num2;
    cout<<"The addition result is: "<<result<<"\n";
}
void SimpleCalculator :: substraction(){
    result = num1 - num2;
    cout<<"The substraction result is: "<<result<<"\n";
}
void SimpleCalculator :: multiplication(){
    result = num1 * num2;
    cout<<"The multiplication result is: "<<result<<"\n";
}
void SimpleCalculator :: division(){
    result = num1 / num2;
    cout<<"The division result is: "<<result<<"\n";
}

class ScientificCalculator : public SimpleCalculator{
    protected:
        double val;
    public:
        void findAbs();
        void findSine();
        void findCosine();
        void findTan();
};

void ScientificCalculator :: findAbs(){
    cout<<"Enter the value: ";
    cin>>val;
    result = abs(val);
    cout<<"The absolute value is: "<<result<<"\n";
}
void ScientificCalculator :: findSine(){
    cout<<"Enter the value: ";
    cin>>val;
    result = sin(val);
    cout<<"The sine value is: "<<result<<"\n";
}
void ScientificCalculator :: findCosine(){
    cout<<"Enter the value: ";
    cin>>val;
    result = cos(val);
    cout<<"The cosine value is: "<<result<<"\n";
}
void ScientificCalculator :: findTan(){
    cout<<"Enter the value: ";
    cin>>val;
    result = tan(val);
    cout<<"The tan value is: "<<result<<"\n";
}

int main()
{
    int c;
    cout<<"Press 1 to use simple calculator."<<"\n";
    cout<<"Press 2 to use sientific calculator."<<"\n";
    cin>>c;
    switch(c){
        case 1:
            int ch1;
            SimpleCalculator sc1;
            cout<<"Press 1 for addition."<<"\n";
            cout<<"Press 2 for substraction."<<"\n";
            cout<<"Press 3 for multiplication."<<"\n";
            cout<<"Press 4 for division."<<"\n";
            cin>>ch1;
            switch(ch1){
                case 1:
                    sc1.takeInput();
                    sc1.addition();
                    break;
                case 2:
                    sc1.takeInput();
                    sc1.substraction();
                    break;
                case 3:
                    sc1.takeInput();
                    sc1.multiplication();
                    break;
                case 4:
                    sc1.takeInput();
                    sc1.division();
                    break;
                default:
                    cout<<"You have given a wrong choice"<<"\n";
            }
            break;
        case 2:
            int ch2;
            ScientificCalculator sc2;
            cout<<"Press 1 for addition."<<"\n";
            cout<<"Press 2 for substraction."<<"\n";
            cout<<"Press 3 for multiplication."<<"\n";
            cout<<"Press 4 for division."<<"\n";
            cout<<"Press 5 to find absolute value."<<"\n";
            cout<<"Press 6 to find sine value."<<"\n";
            cout<<"Press 7 to find cosine value."<<"\n";
            cout<<"Press 8 to find tan value."<<"\n";
            cin>>ch2;
            switch(ch2){
                case 1:
                    sc2.takeInput();
                    sc2.addition();
                    break;
                case 2:
                    sc2.takeInput();
                    sc2.substraction();
                    break;
                case 3:
                    sc2.takeInput();
                    sc2.multiplication();
                    break;
                case 4:
                    sc2.takeInput();
                    sc2.division();
                    break;
                case 5:
                    sc2.findAbs();
                    break;
                case 6:
                    sc2.findSine();
                    break;
                case 7:
                    sc2.findCosine();
                    break;
                case 8:
                    sc2.findTan();
                    break;
                default:
                    cout<<"You have given a wrong choice"<<"\n";
            }
            break;
        default:
            cout<<"You have given a wrong choice.\n";
    }
    
    return 0;
}