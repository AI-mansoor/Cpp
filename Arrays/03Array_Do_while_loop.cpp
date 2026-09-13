// #include <iostream>
// using namespace std;

// int main (){
//     int marks []  = {10, 20, 30, 40, 50};
//     string name [] = {"Ali", "Mansoor", "Haider", "Mustafa", "Zeeshan"};

//     int i = 0 ;
//     do {
//         cout << name[i] << " has " << marks[i] << " marks in their final exam." << endl;
//         i++;
//     } while (i < 5);
//     return 0 ;

//     }


    #include <iostream>
using namespace std;

int main() {

    int i = 1;  // Start from 1

    do {
        // Print the current value of i
        cout << i << " ";

        // Increase i by 1
        i++;

    } while (i <= 5);  // Continue while i is less than or equal to 5

    return 0;
}