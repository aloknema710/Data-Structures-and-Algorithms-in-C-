#include<bits/stdc++.h>
using namespace std;
// compile time polymorphism
class student{
    public:               // example of constructor overloading
        string name;
        student(){
            cout << "Default constructor called" << endl;
        }
        student(string n){
            name = n;
            cout << "Constructor called for " << name << endl;
        }
        ~student(){
            cout << "Destructor called for " << name << endl;
        }
};

class Print{
    public:              // example of function overloading
        void show(int x){
            cout << "Print function called with int: "<< x << endl;
        }
        void show(char c){
            cout << "Print function called with char: " << c << endl;
        }
};

// runtime polymorphism
class parent{
    public:
        virtual void show(){
            cout << "Parent class show function" << endl;
        }
};
class child: public parent{
    public:
        void show(){
            cout << "Child class show function" << endl;
        }
};
int main(){
    // student s1;
    student s1("John");
    Print p;
    p.show(5);
    p.show('A');
    // Destructor will be called automatically when the object goes out of scope

    parent p1;
    p1.show();
    child c1;
    c1.show();
}