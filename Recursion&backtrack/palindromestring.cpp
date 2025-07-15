#include<bits/stdc++.h>
using namespace std;
bool checkpalindrome(string str, int start, int end) {
    // Convert string to lowercase
    for (auto& x : str) {
        x = tolower(x);
    }

    if(start >= end) return true;

    return (str[start] == str[end]) && checkpalindrome(str, start + 1, end - 1);
    // The above line checks if the characters at the start and end indices are equal inside each recursive call.
}
int main() {
    string str;
    cin >> str;
    
    int start = 0, end = str.length() - 1;
    cout << checkpalindrome(str, start, end);
}

/*
bool isPalindromeRecursive(const string& str, int start, int end) {
    // Base case
    if (start >= end) return true;

    // Skip non-alphanumeric characters from the front
    if (!isalnum(str[start])) return isPalindromeRecursive(str, start + 1, end);

    // Skip non-alphanumeric characters from the back
    if (!isalnum(str[end])) return isPalindromeRecursive(str, start, end - 1);

    // Compare characters (case-insensitive)
    if (tolower(str[start]) != tolower(str[end])) return false;

    // Move inward
    return isPalindromeRecursive(str, start + 1, end - 1);
}
*/