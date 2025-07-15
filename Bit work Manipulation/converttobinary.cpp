#include <iostream>
#include <vector>
using namespace std;

void decimalToBinary(int n) {
    if (n == 0) {
        cout << "0";
        return;
    }
    vector<int> binary;
    while (n > 0) {
        binary.push_back(n % 2);
        n /= 2;
    }
    for (int i = binary.size() - 1; i >= 0; --i) {
        cout << binary[i];
    }
}
 // T.C. : O(log n) for the number of bits in the binary representation
// S.C. : O(log n) for the vector to store the binary digits
string decimalToBinaryString(int n) {
    if (n == 0) return "0";
    string binary;
    while (n > 0) {
        binary = to_string(n % 2) + binary;
        n /= 2;
    }
    return binary;
}

int main() {
    int num;
    cout << "Enter a decimal integer: ";
    cin >> num;
    cout << "Binary: ";
    decimalToBinary(num);
    cout << endl;
    cout << "Binary (string): " << decimalToBinaryString(num) << endl;
    return 0;
}