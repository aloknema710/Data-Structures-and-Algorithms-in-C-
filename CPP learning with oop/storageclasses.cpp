#include <iostream>
using namespace std;

/*
Storage Classes in C++:
1. auto: Default for local variables. Lifetime is within the block.
2. register: Suggests storing variable in CPU register for faster access.
3. static: Retains value between function calls. Lifetime is entire program.
4. extern: Declares a variable defined elsewhere (outside current file/scope).
5. mutable: Allows a class member to be modified even if the object is const.
*/

// 4. extern storage class
// Declaration (definition is below main)
extern int externVar;

// Class to demonstrate static and mutable
class Demo {
public:
    // static member variable: shared by all objects, lifetime is entire program
    static int staticCount;

    // mutable member variable: can be modified in const member functions
    mutable int mutableVar;

    Demo() : mutableVar(0) {}

    void incrementStatic() {
        staticCount++;
    }

    void setMutable(int val) const {
        mutableVar = val; // allowed because mutable
    }
};

// Definition of static member
int Demo::staticCount = 0;

// Definition of extern variable
int externVar = 100;

int main() {
    // 1. auto storage class (default for local variables)
    /*auto*/ int autoVar = 10; // 'auto' keyword is optional in C++11 and above

    // 2. register storage class
    register int regVar = 20; // Suggests storing in CPU register (modern compilers may ignore)

    // 3. static storage class
    static int staticVar = 30; // Retains value between function calls

    cout << "autoVar: " << autoVar << endl;
    cout << "regVar: " << regVar << endl;
    cout << "staticVar: " << staticVar << endl;

    // 4. extern storage class
    cout << "externVar: " << externVar << endl;

    // 5. static and mutable in class
    Demo d1, d2;
    d1.incrementStatic();
    d2.incrementStatic();
    cout << "Demo::staticCount (shared by all objects): " << Demo::staticCount << endl;

    // mutable member demonstration
    const Demo d3;
    d3.setMutable(42); // allowed due to mutable
    cout << "d3.mutableVar (modified in const object): " << d3.mutableVar << endl;

    return 0;
}