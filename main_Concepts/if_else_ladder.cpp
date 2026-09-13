# include <iostream>
using namespace std;

int main() {
    string name;
    float mark1 , marks2, marks3;
    float total, average;
    char grade;

    cout << " Enter your name " ;
    getline (cin,name );

    cout << " Enter your marks in three subjects " ;
    cin >> mark1 >> marks2 >> marks3;

    total = mark1 + marks2 + marks3;
    average = total / 3;


    if (average >= 80) {
        grade = 'A';
    } else if (average >= 60) {
        grade = 'B';
    } else {
        grade = 'C';
    }

    cout << "Name: " << name << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Average Marks: " << average << endl;
    cout << "Grade: " << grade << endl;
    return 0;
}

