#include<iostream>
#include<fstream>
using namespace std;

/*
    The useful classes working with files in C++: 
    1. fstreambase
    2. ifstream --> derived from fstreambase
    3. ofstream --> derived from fstreambase
*/
/*
    In order to work with files in C++, we will have to open it first.Primarily there are two ways to open a file:
    1. using the constructor
    2. using the member function open() of the class
*/

int main()
{
    // string sobj = "Hello C++ Files";
    // //opening file using constructor and writing to it
    // ofstream out("SampleFile.txt");
    // out<<sobj;

    //opening files using constructor and reading from it;
    ifstream in("SampleFile.txt");
    string s;
    in>>s;
    cout<<s;
    getline(in, s);
    cout<<s;

    return 0;
}