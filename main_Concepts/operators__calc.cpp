// calculator 


# include <iostream>
using namespace std;

int main (){
    
    int a, b;
    char op;

    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> b;
     
    if (op == '+') {
        cout << "Result: " << a + b << endl;
    } else if (op == '-') {
        cout << "Result: " << a - b << endl;
    } else if (op == '*') {
        cout << "Result: " << a * b << endl;
    } else if (op == '/') {
        if (b != 0) {
            cout << "Result: " << a / b << endl;
        } else {
            cout << "Error: Division by zero!" << endl;
        }
    } else {
        cout << "Error: Invalid operator!" << endl;
    }
}