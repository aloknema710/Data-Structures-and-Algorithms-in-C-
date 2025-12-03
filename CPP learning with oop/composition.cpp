#include <iostream>
#include <vector>
using namespace std;

class Menu {
public:
    void showItems() {
        cout << "Menu: Pizza, Pasta, Salad" << endl;
    }
};

class Restaurant {
private:
    Menu menu; // Composition: Restaurant has a Menu
public:
    void displayMenu() {
        menu.showItems(); // Delegates behavior to Menu
    }
};



int main() {
    Restaurant r;
    r.displayMenu(); // Accessing Menu through Restaurant
    return 0;
}

/*
class GPS {
public:
    void getLocation() {
        cout << "Getting current location...\n";
    }
};

class Driver {
private:
    GPS gps; // Composition: Driver has a GPS
public:
    void navigate() {
        gps.getLocation(); // Delegates GPS functionality
    }
};

*/



// u shall not confuse this concept with inheritence
/*
✅ Student is a Person
A student has all the features of a person (name, walk), and some extra (study).

✅ Student has a ReportCard
A student is not a report card, but uses one.

Both are different 

🔚 Final Analogy (Very Simple):
Inheritance:
🐶 A Dog is a Animal → shares animal behavior, adds specific dog behavior.

Composition:
🚗 A Car has a Engine → the engine is used by the car, but it’s not "a type of" car.

*/