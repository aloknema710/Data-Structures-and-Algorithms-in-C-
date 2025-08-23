#include<bits/stdc++.h>
using namespace std;

// class Solution {
//     public:

int sumOfIntegers(string str, int l){
    int sum = 0;
    string tempSum = "";
    for(int i = 0; i < l; i++){
        if(str[i] >= '0' && str[i] <= '9'){
            tempSum += str[i];
            }
        else {
            sum += atoi(tempSum.c_str()) ;
            tempSum = ""  ;
        }
    }
    return sum + atoi(tempSum.c_str());
}
// };
int main() {
    string str = "1a30z67"  ;
    int l = str.length()  ;

    // Solution obj ;
    cout << "Sum: "  ;
    cout <</* obj.*/sumOfIntegers(str, l)  ;
    return 0  ;
}

// deep theory
/*
🔹 1. tempSum.c_str()
.c_str() is a function that converts a string (like "123") into a C-style string — which is just a 
//fancy way of saying a pointer to a bunch of characters (basically, text in the way older C programs understand it).
🧠 Think of it like this:
"Hey computer, take this nice C++ string and give it to me in the raw, old-school way so another function (like atoi) can use it."

🔹 2. atoi()
atoi stands for ASCII to Integer.
It’s a function that takes a C-style string (like "123") and converts it into an actual number (like 123 — the integer).

So what does atoi(tempSum.c_str()) do?
tempSum.c_str() turns a C++ string into a C-style string (basically, "123" → a character pointer).

atoi() then takes that and converts it into a number (like 123).

✅ Final Summary:

sum += atoi(tempSum.c_str());
Means:

“Take the number stored as text in tempSum, convert it into an actual integer, and add it to sum.”


*/


/*
🔁 Your Original Code:
string str = "1a30z67";


This code sums the integers embedded in the string:

"1" → 1

"30" → 30

"67" → 67
✅ So total: 1 + 30 + 67 = 98

💡 Your Suggested Approach:

"Why not just do: if s[i] is a digit, convert it to an int and add to answer?"

That would do this:

'1' → 1

'3' → 3

'0' → 0

'6' → 6

'7' → 7
✅ So total: 1 + 3 + 0 + 6 + 7 = 17

| Goal                             | Logic Needed                                | Sum for `"1a30z67"` |
| -------------------------------- | ------------------------------------------- | ------------------- |
| Sum of all **whole numbers**     | Need to **build multi-digit numbers**       | `98`                |
| Sum of all **individual digits** | Just check `isdigit(s[i])` and add directly | `17`                |

*/