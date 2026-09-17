#include <iostream>
using namespace std ;

class father 
{
    public :
    string name ;
    int age ;
};

class son : public father 
{
    public :
    string school ;
    int roll_number ;
};

class grandson : public son 
{ public :
    string grade ;
    int height ;
};


int main ()
{
    grandson g1 , g2 ;

    g1.name = "Mansoor" ;
    g1.age = 50 ;
    g1.school = "Al Qadir university" ;
    g1.roll_number = 101 ;
    g1.grade = "A" ;
    g1.height = 5.8 ;

    g2.name = "Musawar" ;
    g2.age = 45 ;
    g2.school = "Al Qadir university" ;
    g2.roll_number = 102 ;
    g2.grade = "B" ;
    g2.height = 5.6 ;

    cout << "Grandson 1:" << endl ;
    cout << "Name: " << g1.name << endl ;
    cout << "Age: " << g1.age << endl ;
    cout << "School: " << g1.school << endl ;
    cout << "Roll Number: " << g1.roll_number << endl ;
    cout << "Grade: " << g1.grade << endl ;
    cout << "Height: " << g1.height << endl ;

    cout << "\nGrandson 2:" << endl ;
    cout << "Name: " << g2.name << endl ;
    cout << "Age: " << g2.age << endl ;
    cout << "School: " << g2.school << endl ;
    cout << "Roll Number: " << g2.roll_number << endl ;
    cout << "Grade: " << g2.grade << endl ;
    cout << "Height: " << g2.height << endl ;

    return 0;
}