#include<iostream>
using namespace std;

class Student{
    protected:
        int sId;
    public:
        void setData(){
            cout<<"Enter student id: ";
            cin>>sId;
        }
        void getData(){
            cout<<"The student id is: "<<sId<<"\n";
        }
};

class Exam : public Student{
    protected:
        float math;
        float english;
    public:
        void setMarks(){
            cout<<"Enter marks for math: ";
            cin>>math;
            cout<<"\nEnter marks for english: ";
            cin>>english;
        }
        void getMarks(){
            cout<<"marks for math is: "<<math<<"Id is: "<<sId<<"\n";
            cout<<"marks for english is: "<<english<<"Id is: "<<sId<<"\n";
        }
};

class Result : public Exam{
    protected: 
        int result;
    public:
        void calcResult(){
            result = (math+english)/2;
        }
        void showResult(){
            cout<<"The result for Id: "<<sId<<" is: "<<result<<"\n";
        }
};

int main()
{
    Student sData;
    sData.setData();
    sData.getData();
    Exam eData;
    eData.setMarks();
    eData.setData();
    eData.getMarks();
    Result rData;
    rData.setMarks();
    rData.setData();
    rData.calcResult();
    rData.showResult();
    return 0;
}