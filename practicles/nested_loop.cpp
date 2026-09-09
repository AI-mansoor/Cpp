# include <iostream>
using namespace std;

// int main (){
  
// int m ;
// cout << "Enter a number: ";
// cin >> m;
// int n;
// cout << "Enter a number: ";
// cin >> n;

//     for (int i = 1 ; i <= m ;i++){
//         for (int j = 1 ; j <= n ; j++){
//             cout << "@";
//         }
//         cout << endl;
//     }

// }





//  triangle pattern 

// int main (){
  
// //                                                      @@@@@      this pattern is printed using nested for loops
// //                                                      @@@@
// //                                                      @@@
// //                                                      @@
// //                                                      @
                                                        
//     for (int i = 5 ; i >= 0 ;i--){
//         for (int j = 1 ; j <= i; j++){
//             cout << "@";
//         }
//         cout << endl;
//     }

// }






//                            this pattern is printed using nested for loops
//                                                      @
//                                                      @@
//                                                      @@@@
//                                                      @@@@@

int main (){
                                                        
    for (int i = 0 ; i <= 5 ;i++){
        for (int j = 0 ; j <= i; j++){
            cout << "@";
        }
        cout << endl;
    }

}