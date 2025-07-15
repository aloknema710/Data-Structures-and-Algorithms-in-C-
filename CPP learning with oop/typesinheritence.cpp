#include <iostream>
using namespace std;

// 1. Single Inheritance
class Animal {
public:
    void eat() { cout << "Animal eats food." << endl; }
};

class Dog : public Animal {
public:
    void bark() { cout << "Dog barks." << endl; }
};

// 2. Multiple Inheritance
class Engine {
public:
    void start() { cout << "Engine starts." << endl; }
};

class Wheels {
public:
    void rotate() { cout << "Wheels rotate." << endl; }
};

class Car : public Engine, public Wheels {
public:
    void drive() { cout << "Car drives." << endl; }
};

// 3. Multilevel Inheritance
class Vehicle {
public:
    void move() { cout << "Vehicle moves." << endl; }
};

class Bike : public Vehicle {
public:
    void balance() { cout << "Bike balances." << endl; }
};

class SportsBike : public Bike {
public:
    void race() { cout << "SportsBike races." << endl; }
};

// 4. Hierarchical Inheritance
class Shape {
public:
    void draw() { cout << "Drawing shape." << endl; }
};

class Circle : public Shape {
public:
    void area() { cout << "Area of circle." << endl; }
};

class Square : public Shape {
public:
    void area() { cout << "Area of square." << endl; }
};

// 5. Hybrid Inheritance (Combination of two or more types)
// Example: Combination of Multiple and Multilevel
class A {
public:
    void showA() { cout << "Class A" << endl; }
};

class B : public A {
public:
    void showB() { cout << "Class B" << endl; }
};

class C {
public:
    void showC() { cout << "Class C" << endl; }
};

class D : public B, public C {
public:
    void showD() { cout << "Class D" << endl; }
};

int main() {
    cout << "Single Inheritance:" << endl;
    Dog d;
    d.eat();
    d.bark();

    cout << "\nMultiple Inheritance:" << endl;
    Car car;
    car.start();
    car.rotate();
    car.drive();

    cout << "\nMultilevel Inheritance:" << endl;
    SportsBike sb;
    sb.move();
    sb.balance();
    sb.race();

    cout << "\nHierarchical Inheritance:" << endl;
    Circle c;
    Square s;
    c.draw();
    c.area();
    s.draw();
    s.area();

    cout << "\nHybrid Inheritance:" << endl;
    D obj;
    obj.showA();
    obj.showB();
    obj.showC();
    obj.showD();

    return 0;
}