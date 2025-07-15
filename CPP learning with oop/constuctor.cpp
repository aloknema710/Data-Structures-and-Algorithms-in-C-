#include <iostream>
#include <string>
using namespace std;

// Class to demonstrate all key features of constructors
class Student {
    string name;
    int age;
    float gpa;

public:
    // 1. Default Constructor
    Student() {
        cout << "Default constructor called\n";
    }

    // 2. Parameterized Constructor
    Student(string n, int a, float g) {
        cout << "Parameterized constructor called\n";
        name = n;
        age = a;
        gpa = g;
    }

    // 3. Copy Constructor       // other than default copy constructor
    // This constructor is called when an object is initialized with another object of the same class
    Student(const Student& other)  {       // const is used to ensure that the original object is not modified
        cout << "Copy constructor called\n";
        this->name = other.name;                 // 'this' pointer is used to refer to the current object
        this->age = other.age;
        this->gpa = other.gpa;
    }

    // 4. Move Constructor (C++11 and above)
    Student(Student&& other) {
        cout << "Move constructor called\n";
        other.age = 0;
        other.gpa = 0.0f;
    }

    // 5. Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }

    // 6. Assignment Operator (for completeness)
    Student& operator=(const Student& other) {
        cout << "Copy assignment operator called\n";
        if (this != &other) {
            name = other.name;
            age = other.age;
            gpa = other.gpa;
        }
        return *this;
    }

    // 7. Member function to display details
    void display() const {
        cout << "Name: " << name << ", Age: " << age << ", GPA: " << gpa << endl;
    }
};

int main() {
    cout << "1. Creating s1 using default constructor:\n";
    Student s1;
    s1.display();

    cout << "\n2. Creating s2 using parameterized constructor:\n";
    Student s2("Alice", 20, 3.8f);
    s2.display();

    cout << "\n3. Creating s3 using copy constructor:\n";
    Student s3 = s2;        // can also be written as Student s3(s2);
    // Student s3(s2);     // This is also validin C++11 and above 
    s3.display();

    cout << "\n4. Creating s4 using move constructor:\n";
    Student s4 = std::move(s3);
    s4.display();

    cout << "\n5. Using copy assignment operator:\n";
    s1 = s2;
    s1.display();

    cout << "\nEnd of main, destructors will be called automatically.\n";
    return 0;
}