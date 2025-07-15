#include<bits/stdc++.h>
using namespace std;

class shape{
    // public:
    virtual void draw() = 0; // pure virtual function 
    // pure virtual function makes the class abstract
};

class circle: public shape{
    public:
    void draw(){
        cout << "Drawing circle" << endl;
    }
};

int main(){
    // shape s1; // cannot create object of abstract class, it will give error

    shape *s1; // pointer of abstract class
    circle c1; // object of derived class
    c1.draw(); // calling the draw function of derived class
}