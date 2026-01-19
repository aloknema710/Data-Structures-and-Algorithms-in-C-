// // #include<bits/stdc++.h>

// #include<iostream>
// #include<mutex>
// using namespace std;

// class Singleton{ // this singleton class is ok but not safe from threading if multiple threads from different core processor tries
//     //to access then both will create their own obj.. to make it thread safe we have to use mutex lock while creating the obj..

//     static Singleton* Instance;   // static var.. checks weather an obj.. is created or not by holding that instance next14.line
//     static mutex mtx;          // mutex lock for thread safety

//     Singleton(){
//         cout<<"Constructor called, new Obj.. Created";
//     }

// public:
//     static Singleton* getInstance(){    // static keyword infront of var or funcs.. make it only belong to class not objects
       
//         // below was the code before making it thread safe but locking and unlocking every time is costly so we can use double checked locking 
//         // try to avoid as possible

//         if(Instance == nullptr){    
//             lock_guard<mutex> lock(mtx);  // lock the critical section to make it thread safe
//             if(Instance == nullptr){
//                 Instance = new Singleton();    // if no obj created then it will create a new one
//             }
//             // Instance = new Singleton();
//             // return Instance;    // return already created obj..
//         }
        
//         return Instance;        // return already created obj..

//         // lock_guard<mutex> lock(mtx);  // lock the critical section to make it thread safe
//         // if(Instance == nullptr) Instance = new Singleton();    // if no obj created then it will create a new one
//         // return Instance;        // return already created obj..
//     }
// };

// // in c++ we have to declare it outside 
// Singleton*Singleton::Instance = nullptr;


// int main(){
//     /*    
//         Singleton s1 = new Singleton();      // s1 and s2 are pointers to the objects in heap memory from stack
//         Singleton s2 = new Singleton();

//         cout<<(s1 == s2)<<endl;      // prints constructor funcs.. and 0(false) since s1 and s2 are different objs..
//     */


//     // after making constructor private: we make it inaccessible for main,
//     // but we don't have to stop it we only need to make it one time 
//     // if created again we have to allow only 1 obj for it 
//     Singleton* s1 = Singleton::getInstance();
//     Singleton* s2 = Singleton::getInstance();

//     cout<<(s1 == s2)<<endl;   // after completing code constructor will be executed only once and we will get true for cond@n.
// }


// eager initialization - instance is created at the time of class loading
// thread safe without using mutex and consitionals
// disadvantages - instance is created even though client application might not be using it waste of resources
 
#include <iostream>

class Singleton {
private:
    // Eagerly created instance
    static Singleton instance;

    // Private constructor
    Singleton() {
        std::cout << "Constructor called\n";
    }

public:
    // Delete copy operations
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    // Global access point
    static Singleton& getInstance() {
        return instance;
    }
};

// Definition of static member
Singleton Singleton::instance;

int main() {
    Singleton& s1 = Singleton::getInstance();
    Singleton& s2 = Singleton::getInstance();

    std::cout << (&s1 == &s2) << std::endl; // prints 1 (true)
}
