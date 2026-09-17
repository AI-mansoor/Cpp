#include <iostream>
using namespace std;

class Father
{
public:        //  Inheritance allows one class to acquire properties/functions of another class.
    int age;
    string name;

    void setFather(int a, string n)
    {
        age = a;
        name = n;
    }
};

class Son : public Father
{
public:
    int roll_number;

    void setSon(int a, string n, int r)
    {
        setFather(a, n);
        roll_number = r;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll Number: " << roll_number << endl;
    }
};

int main()
{
    Son s1, s2;

    s1.setSon(50, "Mansoor", 101);
    s2.setSon(45, "Musawar", 102);

    cout << "Son 1:" << endl;
    s1.display();

    cout << "\nSon 2:" << endl;
    s2.display();

    return 0;
}