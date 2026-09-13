#include <iostream>
using namespace std;

class Student
{
private:
    string name;

public:

    // Constructor
    Student(string studentName)
    {
        name = studentName;
        cout << "Constructor: " << name << " object created." << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Destructor: " << name << " object destroyed." << endl;
    }

    // Function
    void display()
    {
        cout << "Student Name: " << name << endl;
    }
};

int main()
{
    cout << "Program Started\n\n";

    {
        // Object is created
        Student s("Mansoor");

        s.display();

        cout << "\nInside the block..." << endl;
    }
    // s is destroyed here
    // Destructor runs automatically

    cout << "Back in main()" << endl;
    cout << "Program Ending..." << endl;

    return 0;
}