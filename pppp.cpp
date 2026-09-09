// // #include <iostream>
// // using namespace std;

// // class student {
// //     public :
// //     string name ;
// //     int marks;
// //     int roll_number ;


// //     student(string n , int m ,int r){
// //         name = n ;
// //         marks = m ;
// //         roll_number = r ;
// //     }

// //     void display (){
// //         cout << "Name : " << name  <<endl<< "Marks : "<< marks    << endl<< "Roll Number : " << roll_number  << endl;
// //     }
// // };

// // int main (){

// //     student s1 ( "mansoor ",85 , 101);
// //     student s2 ( "musawar ", 90 , 102);
// //     student s3 ( "mustafa ", 95 , 103);

// //     s1.display();
// //     s2.display();
// //     s3.display();
// // }


// #include <iostream>
// using namespace std;

// int main() {                        // i + 1    ==   i++ 
//     string name [4];

//     for (int i = 0 ;i <=3 ; i++){
//         cout << " Enter your name :" << i + 1 << ":" ;
//         cin >> name[i];

//     } 

//     for (int i = 0 ;i <=3 ; i++){
//         cout << " Name :" << i + 1 << ":"<< name[i] << endl ;
//     }
// }






 #include <iostream>
using namespace std;
                      
int main() {
    int age ;
    cout << "Enter your age: ";
    cin >> age ;

    if (age >= 18) {
        cout << "You are eligible to vote." << endl;
    } else if (age < 0) {
        cout << "Invalid age entered." << endl;
    } else {
        cout << "You are not eligible to vote." << endl;
    }

    return 0;
}







