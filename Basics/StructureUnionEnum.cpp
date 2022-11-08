#include<iostream>
using namespace std;

union money{
    int rupees;
    float pounds;
    double dollars;
};
struct employee{
    int id;
    char favChar;
    float salary;
};
/*
typedef struct employee{
    int id;
    char favChar;
    float salary;
}ep;
*/

int main(){
    
    struct employee emp1;
    //ep emp1;  //  structure using typedef
    emp1.id = 1;
    emp1.favChar = 'A';
    emp1.salary = 30000;

    cout<<"id: "<<emp1.id<<endl;
    cout<<"favChar: "<<emp1.favChar<<endl;
    cout<<"salary: "<<emp1.salary<<endl;

    union money mn;
    cout<<"Enter rupees: ";
    cin>>mn.rupees;
    cout<<"Enter pounds: ";
    cin>>mn.pounds;
    cout<<"Enter dollars: ";
    cin>>mn.dollars;
    cout<<mn.rupees<<endl;
    cout<<mn.pounds<<endl;
    cout<<mn.dollars<<endl;

    //enum
    enum meal{breakfast,lunch,dinner};
    cout<<breakfast<<endl;  //breakfast = 0
    cout<<lunch<<endl;      //lunch = 1
    cout<<dinner<<endl;     //dinner = 2
    meal m1 = lunch;
    cout<<m1<<endl;
    cout<<(m1==1)<<endl;
    return(0);
}