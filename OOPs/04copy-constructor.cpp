
// 3️⃣ Copy Constructor
// A copy constructor is a special constructor in C++ 
// that creates a new object by copying the data of an existing object.

#include <iostream>
using namespace std;

// // class CopyStudent {
// // public:
// //     string name;
// //     int age;

// //     CopyStudent(string name , int age) {
// //         this->name = name;                            // *ptr  adress of the object that is being created
// //         this->age = age;
        
// //     }

// //     CopyStudent(CopyStudent &s) {
// //         name = s.name;
// //         age = s.age;
// //     }
// // };

// // int main() {

// //     CopyStudent s1("Mansoor", 21);
// //     CopyStudent s2("haider ", 50);


 

// //     CopyStudent s3(s2);

// //     cout << s1.name << " " << s1.age<< endl;
// //     cout << s2.name << " " << s2.age<< endl;
// //     cout << s3.name << " " << s3.age<< endl;
// // }




// class CopyStudent {
//     public:
//     string name ;
//     int marks ;

//     CopyStudent(string n ,int m){
//         name = n ;
//         marks = m ;

//     }


//     CopyStudent (const CopyStudent &s){
//         name = s.name ;
//         marks = s.marks ;
//     }

//     void dispaly (){
//         cout<< name << "got  " << marks<< "  in his exam "<<endl;
       
        
//     }

// };



// int main (){
//     CopyStudent s1 ("Mansoor ", 939);
//     CopyStudent s2 = (s1);
//     s1.dispaly();
//     s2.dispaly();
// }




class father {
    public :
    string name ;
    int age ;

    father (string n , int a ){
        name = n ;
        age = a ;
    }

    father (const father &f){
        name = f.name;
        age = f.age ;


    }
    void display (){
        cout <<" my name is " << name << " and i am "<< age << " old "<< endl;
    }

};

int main ( ){
    father f1 ("mansoor", 21);
    father f2 = f1;
    f1.display();
    f2.display();
   
}