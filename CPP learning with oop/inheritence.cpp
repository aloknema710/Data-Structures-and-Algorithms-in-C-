#include<bits/stdc++.h>
using namespace std;

class Person{
    private:
        string name;
        int age;
    public:
        Person(string n, int a) {
            name = n;
            age = a;
        }
        void display() {
            cout << "Name: " << name << ", Age: " << age << endl;
        }
};
// Class Student inherits from Person
class Student : public Person {
    private:
        string major;
    public:
        Student(string n, int a, string m) : Person(n, a) { // Constructor of base class is called
            major = m;
        }
        void display() {
            Person::display(); // Call base class display function
            cout << "Major: " << major << endl;
        }
};

int main() {
    Person p("Alice", 30);
    p.display(); // Display person details
    Student s("John Doe", 20, "Computer Science");
    s.display(); // Display student details
    return 0;
}