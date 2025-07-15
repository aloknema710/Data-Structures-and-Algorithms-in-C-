#include<bits/stdc++.h>
using namespace std;
// Function to set the ith bit of a number
int setBit(int n, int i) {
    return n | (1 << i); // Set the ith bit using bitwise OR
}   
// Function to clear the ith bit of a number
int clearBit(int n, int i) {
    return n & ~(1 << i); // Clear the ith bit using bitwise AND with NOT
}
// Function to toggle the ith bit of a number
int toggleBit(int n, int i) {
    return n ^ (1 << i); // Toggle the ith bit using bitwise XOR
}
int main() {
    int n, i;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter the bit position to set/clear/toggle (0-indexed): ";
    cin >> i;

    // Set the ith bit
    int setResult = setBit(n, i);
    cout << "After setting the " << i << "th bit: " << setResult << endl;

    // Clear the ith bit
    int clearResult = clearBit(n, i);
    cout << "After clearing the " << i << "th bit: " << clearResult << endl;

    // Toggle the ith bit
    int toggleResult = toggleBit(n, i);
    cout << "After toggling the " << i << "th bit: " << toggleResult << endl;

    return 0;
}