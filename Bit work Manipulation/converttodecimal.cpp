#include <iostream>
#include <string>
#include <cmath>

int binaryToDecimal(const std::string& binaryStr) {
    int decimal = 0;
    int n = binaryStr.length();
    for (int i = 0; i < n; ++i) {
        if (binaryStr[n - 1 - i] == '1') {      // always start from last imp.
            decimal += std::pow(2, i);
        }
    }
    return decimal;
}

int main() {
    std::string binaryStr;
    std::cout << "Enter a binary string: ";
    std::cin >> binaryStr;

    int decimal = binaryToDecimal(binaryStr);
    std::cout << "Decimal value: " << decimal << std::endl;

    return 0;
}