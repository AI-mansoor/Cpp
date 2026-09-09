#include <iostream>
using namespace std;

// A constructor is a special function inside a class that automatically runs when we create an object.
// Non parametarized constructor is a constructor that does not take any parameters. It is used to initialize the object with default values.
class Student {
public:
    Student() {
        cout << "Student object created!" << endl << "This is a non-parameterized constructor" << endl;
    }
};

int main() {
    Student s1;
}




