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

class daughter : public father 
{ public :
    string grade ;
    int height ;
};


int main ()
{
    daughter g1 , g2 ;

    g1.name = "Mansoor" ;
    g1.age = 50 ;
    g1.grade = "A" ;
    g1.height = 5.8 ;

    g2.name = "Musawar" ;
    g2.age = 45 ;
    g2.grade = "B" ;
    g2.height = 5.6 ;

    cout << "Daughter 1:" << endl ;
    cout << "Name: " << g1.name << endl ;
    cout << "Age: " << g1.age << endl ;
    cout << "Grade: " << g1.grade << endl ;
    cout << "Height: " << g1.height << endl ;

    son s1 ;
    s1.name = "Ali" ;
    s1.age = 20 ;
    s1.school = "Al Qadir university" ;
    s1.roll_number = 101 ;

    cout << "\nSon 1:" << endl ;
    cout << "Name: " << s1.name << endl ;       
    cout << "Age: " << s1.age << endl ;
    cout << "School: " << s1.school << endl ;
    cout << "Roll Number: " << s1.roll_number << endl ;

    return 0;
}