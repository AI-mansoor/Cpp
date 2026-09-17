#include <iostream>
using namespace std;


        //      Father
        //     /      \
        //   Son    Daughter
        //     \      /
        //      Grandson



// Base class
class Father
{
public:
    string name;
    int age;
};

// Son inherits Father
class Son : public Father
{
public:
    string school;
    int roll_number;
};

// Another class inherits Father
class Daughter : public Father
{
public:
    string subject;
};

// Hybrid inheritance
// Grandson inherits from Son and Daughter
class Grandson : public Son, public Daughter
{
public:
    string grade;
    float height;
};

int main()
{
    Grandson g1;

    // Data from Father through Son
    g1.Son::name = "Mansoor";
    g1.Son::age = 21;

    // Data from Son
    g1.school = "Al Qadir University";
    g1.roll_number = 101;

    // Data from Daughter
    g1.subject = "Computer Science";

    // Data from Grandson
    g1.grade = "A";
    g1.height = 5.8;

    cout << "Grandson Information:" << endl;
    cout << "Name: " << g1.Son::name << endl;
    cout << "Age: " << g1.Son::age << endl;
    cout << "School: " << g1.school << endl;
    cout << "Roll Number: " << g1.roll_number << endl;
    cout << "Subject: " << g1.subject << endl;
    cout << "Grade: " << g1.grade << endl;
    cout << "Height: " << g1.height << endl;

    return 0;
}



