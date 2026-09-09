// #include <iostream>
// using namespace std;

// int main() {

//     int x = 10;

//     int *ptr = &x;

//     cout << "Value of x: " << x << endl;
//     cout << "Address of x: " << &x << endl;
//     cout << "Value stored in ptr: " << ptr << endl;

//     return 0;
// }








// #include <iostream>
// using namespace std;

// int main() {

//     int x = 10;

//     int *ptr = &x;

//     cout << x << endl;
//     cout << *ptr << endl;

//     return 0;
// }


#include <iostream>
using namespace std;

int main() {

    int x = 10;          // Normal integer variable

    int *ptr = &x;       // Pointer variable
                         // &x means "address of x"
                         // ptr stores the address of x

    cout << "Value of x: " << x << endl;

    // &x gives the memory address of x
    cout << "Address of x: " << &x << endl;

    // ptr also contains the address of x
    cout << "Value of ptr: " << ptr << endl;

    // *ptr gives the value stored at the address
    // stored inside ptr
    cout << "Value using ptr: " << *ptr << endl;

    return 0;
}