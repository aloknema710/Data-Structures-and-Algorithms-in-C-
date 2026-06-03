#include <iostream>
#include <vector>
using namespace std;

vector<char> maxOccurringChars(string str) {

    int count[256] = {0};

    // Step 1: Count frequencies
    for(char ch : str) {
        count[(unsigned char)ch]++;
    }

    // Step 2: Find maximum frequency
    int maxfreq = 0;

    for(int i = 0; i < 256; i++) {
        if(count[i] > maxfreq) {
            maxfreq = count[i];
        }
    }

    // Step 3: Collect all chars with max frequency
    vector<char> result;

    for(int i = 0; i < 256; i++) {
        if(count[i] == maxfreq) {
            result.push_back((char)i);
        }
    }

    return result;
}

int main() {

    string str = "aabbcc";

    vector<char> ans = maxOccurringChars(str);

    cout << "Maximum occurring characters are: ";

    for(char ch : ans) {
        cout << ch << " ";
    }

    return 0;
}