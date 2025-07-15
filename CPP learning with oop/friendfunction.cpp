#include<bits/stdc++.h>
using namespace std;

class Box {
private:
    int length;

public:
    Box() { length = 0; }

    // Declare friend function
    friend void showLength(Box);
};

void showLength(Box b) {
    // Can access private member
    cout << "Length is: " << b.length << endl;
}

int main() {
    Box b;
    showLength(b);  // Output: Length is: 0
    return 0;
}