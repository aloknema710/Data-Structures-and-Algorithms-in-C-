#include<bits/stdc++.h>
using namespace std;

class Teacher {        // Object Teacher
    private:              // default access specifier is private.
        double salary;
    public:               // necessaary because we are using this class in main function and default access specifier is private.
        // Object() {
        //     cout << "Object created" << endl;
        // }
        // ~Object() {
        //     cout << "Object destroyed" << endl;
        // }

    // properties / attributes
        string name;
        // double salary;
        string department;
        string subjects;

    // methods /  member functions
        // void setName(string n) {
        //     name = n;
        // }
        
        // void setDepartment(string d) {
        //     department = d;
        // }
        // void setSubjects(string sub) {
        //     subjects = sub;
        // }

       void ChangeDepartment(string newDept) {
            department = newDept; 
        }
        // setters
        void setSalary(double s) {
            salary = s;
        }
        // getters
        // string getName() {
        //     return name;
        // }
        double getSalary() {
            return salary;
        }
        // string getDepartment() {
        //     return department;
        // }
        // string getSubjects() {
        //     return subjects;
        // } 

};
// main function
int main() {
    Teacher t1; // create an object of the class
    // t1.setName("John Doe");
    // t1.setSalary(50000);
    // t1.setDepartment("Computer Science");
    // t1.setSubjects("C++, Java, Python");

    // cout << "Name: " << t1.getName() << endl;
    // cout << "Salary: " << t1.getSalary() << endl;
    // cout << "Department: " << t1.getDepartment() << endl;
    // cout << "Subjects: " << t1.getSubjects() << endl;
    t1.name = "John Doe";
    // t1.salary = 50000;             // cannot access private members directly
    t1.department = "Computer Science";
    t1.subjects = "C++, Java, Python";
    t1.ChangeDepartment("Mathematics");
    cout << "Department: " << t1.department << endl;

    t1.setSalary(50000); // set salary using setter
    cout << "Salary: " << t1.getSalary() << endl;

    cout << "Name: " << t1.name << endl;
    return 0;
} 