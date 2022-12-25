#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_no;
    public:
        void set_number(int number){
            roll_no = number;
        }
        void print_number(){
            cout<<"Student roll no is: "<<roll_no<<"\n";
        }
};

class Test : virtual public Student{
    protected:
        double math,physics;
    public:
        void set_marks(double m1, double m2){
            math = m1;
            physics = m2;
        }
        void print_marks(void){
            cout<<"your result is here: "
                <<"maths: "<<math<<"\n"
                <<"physics: "<<physics<<"\n";
        }
};

class Sports : virtual public Student{
    protected:
        double score;
    public:
        void set_score(double s){
            score = s;
        }
        void print_score(){
            cout<<"your sports score is: "<<score<<"\n";
        }
};

class Result : public Test,public Sports{
    private:
        double total;
    public:
        void display(){
            total = math+physics+score;
            print_number();
            print_marks();
            print_score();
            cout<<"your total score is: "<<total<<"\n";
        }
};

int main()
{
    Result r;
    r.set_number(56);
    r.set_marks(43,54);
    r.set_score(65);
    r.display();
    return 0;
}