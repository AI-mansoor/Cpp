// // Encapsulation :
// // Wrapping data and methods together inside a class and controlling access to that data.

// #include <iostream>
// using namespace std;

// class Student {

// private:  
// int marks;  // private data member              


// public:

//     void setMarks(int m) {
//         marks = m;
//     }
    
//     int getMarks() {
//         return marks;
//     }
// };

// int main (){
//     Student s1;
//     s1.setMarks(85);
//     cout << "Marks: " << s1.getMarks() << endl;
    
//     s1.getMarks();
// }


                     // Another Example of Encapsulation 



#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Setter
    void setName(string name ) {
        this->name  = name ;
    }

    void setAge(int age ) {
        this->age = age;
    }

    // Getter
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }
};

int main() {

    Student s1;

    // We CANNOT do this:
    // s1.name = "Mansoor";  // ERROR
    // s1.age = 21;          // ERROR

    // Instead, use public setters
    s1.setName("Mansoor");
    s1.setAge(21);

    // Use public getters to read private data
    cout << s1.getName() << endl;
    cout << s1.getAge() << endl;

    return 0;
}