#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool isIsomorphic(string s, string t) {
    if (s.length() != t.length()) return false;
    unordered_map<char, char> mapST, mapTS;
    for (int i = 0; i < s.length(); ++i) {
        char c1 = s[i], c2 = t[i];
        if ((mapST.count(c1) && mapST[c1] != c2) ||
            (mapTS.count(c2) && mapTS[c2] != c1)) {
            return false;
        }
        mapST[c1] = c2;
        mapTS[c2] = c1;
    }
    return true;
}

int main() {
    string s, t;
    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> t;
    if (isIsomorphic(s, t))
        cout << "The strings are isomorphic." << endl;
    else
        cout << "The strings are not isomorphic." << endl;
    return 0;
}