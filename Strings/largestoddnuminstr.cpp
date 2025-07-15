#include<bits/stdc++.h>
using namespace std;   
/*
What does substr() do?
substr() is a string function in C++ that extracts a substring from a given string. It takes two parameters:

Starting position (index where the substring begins)

Length (number of characters to include)
The syntax is: string.substr(start_index, length)

In our specific case:
num.substr(0, i + 1) means:

Start from index 0 (the beginning of the string)

Take i + 1 characters
*/
string largestOddNumber(string num) {
    for (int i = num.size() - 1; i >= 0; --i) {
        if ((num[i] - '0') % 2 != 0) {               // jaha odd milega in iteration waha tak hum return kardenge answer.
            return num.substr(0, i + 1);            //remember substr(start_index, length);
        }
    }
    return "";
}
int main(){
    string num = "35427";
    cout<<largestOddNumber(num);
}

// largest odd digit in string
/*
 string largestOddNumber(string num) {
        string largest = "";
        for(int i = 0; i < num.length(); i++){
        char ch = num[i];
        int digit = num[i] - '0'; // Convert char to int
        if(digit % 2 == 1){
            // largest = max(largest,digit);
             if (largest == "" || digit > (largest[0] - '0')) {
                largest = ch; // Store the char as string
            }
        }
    // if(largest == -1) return -1;
    }
    return largest;
    }
*/