#include <iostream>
using namespace std ;

class father 
{
    public:
        int age;
        string name;

        void setFather(int a, string n)
        {
            age = a;
            name = n;
        }
};

class mother 
{
    public:
        int age;
        string name;

        void setMother(int a, string n)
        {
            age = a;
            name = n;
        }
};


class son : public father, public mother 
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
            cout << "Name: " << name << endl ;
            cout << "Age: " << age << endl ;
            cout << "Roll Number: " << roll_number << endl ;
        }
};

int main ()
{
    son s1, s2;

    s1.setSon(50, "mustafa", 101);
    s2.setSon(45, "Musawar", 102);

    cout << "Son 1:" << endl ;
    s1.display();

    cout << "\nSon 2:" << endl ;
    s2.display();

    return 0;
}