#include<bits/stdc++.h>
using namespace std;
string my_toupper(string str){
    for (int i = 0; i < str.length(); i++){
        if (str[i] >= 'a' && str[i]<='z'){
            str[i] = str[i] - 'a' + 'A';
        }
    }
    return str;
}
string my_tolower(string str) {
    // Iterate through the string and convert each character
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a';
        }
    }
    return str;  // Return the modified string
}

int main() {
    string str;
    cin >> str;  // Input a string
    
    cout << my_tolower(str) << endl;  // Call the function and print the result
    cout<<my_toupper(str);
    return 0;
}
