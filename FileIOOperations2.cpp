#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out("SampleFile.txt");
    string name;
    cout<<"Enter a name: ";
    cin>>name;
    out<<name;
    out.close();

    ifstream in("SampleFile.txt");
    string data;
    in>>data;
    cout<<"the data is: "<<data;
    in.close();
    return 0;
}