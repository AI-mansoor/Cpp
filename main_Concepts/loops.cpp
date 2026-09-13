// //  loops 


// // For loop

// # include <iostream>
// using namespace std;

// int main() {
//     for (int i = 1; i <= 10 ; i++){              
//         cout << i << " ";
//     }
// }


// // while loop

// # include <iostream>
// using namespace std;
//                                                  // First, the value is printed.
//                                                  // Then i is increased.
//                                                  // The loop checks the condition again.
// int main() {
//     int i = 2;
//     while ( i <=100){
//         cout << i << " ";
//         i += 1;
//     }
// }



//  do while loop
# include <iostream>
using namespace std;
//                           ✅ do...while runs at least 1 time because it executes before checking the condition
int main() {
    int i = 1;
    do {
        cout << i << " ";
        i += 1;
    } while (i <= 10);
}