#include<bits/stdc++.h>
using namespace std;

// bool isBitSet(int n, int i) {
//     return (n & (1 << i)) != 0; // Check if the ith bit is set using left shift and bitwise AND
//     // (1 << i) creates a number with only the ith bit set
// }

bool isBitSet(int n, int i) {
    return (1 & (n >> i)) != 0; // Check if the ith bit is set using right shift and bitwise AND
}

int main() {
    int n, i;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter the bit position to check (0-indexed): ";
    cin >> i;

    if (isBitSet(n, i)) {
        cout << "The " << i << "th bit is set." << endl;
    } else {
        cout << "The " << i << "th bit is not set." << endl;
    }

    return 0;
}