#include <iostream>
#include <string>
using namespace std;


class student {
    public :
    string name ;
    int    age ;
    float  gpa ;
    int salary ;

};


void display (student s){
    cout <<  s.name <<"       "<< s.age <<"        "<< s.gpa <<"       "<< s.salary << endl;
}

void display(student s);


int main (){

    student s1;   
    s1.name =   "Mansoor";
    s1.age =    30 ;
    s1.gpa =    3.13;
    s1.salary = 50000;


    student s2;
    s2.name =   "musawar";
    s2.age =    50 ;
    s2.gpa =    3.5;
    s2.salary = 20000;


    
    student s3;
    s3.name =   "Mustafa";
    s3.age =    50 ;
    s3.gpa =    3.45;
    s3.salary = 80000;

    cout << "Name" <<"          "<<"Age"<<"       "<<"GPA"<<"        "<<"Salary"<<endl;


    display(s1);
    display(s2);
    display(s3);
}

