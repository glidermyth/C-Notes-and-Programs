#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample.txt");
    out<<"This is me coding right now\n";
    out<<"Hello C++\n";
    out<<"Hello world\n";
    out<<"Hello arbaj\n";
    out.close();

    ifstream in;
    in.open("sample.txt");
    string s1,s2;
    in>>s1>>s2;
    cout<<s1<<"\n"<<s2<<"\n";
    while(in.eof()==0){
        getline(in,s1);
        cout<<s1<<"\n";
    }
    in.close();
    return 0;
}