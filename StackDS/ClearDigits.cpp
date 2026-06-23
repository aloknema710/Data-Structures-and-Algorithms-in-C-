#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string clearDigits(string s) {
        string result;

        for(char ch : s) {
            if(isdigit(ch)) {
                if(!result.empty()) {
                    result.pop_back();   // remove previous character
                }
            }
            else {
                result.push_back(ch);    // keep character
            }
        }

        return result;
    }
};

// class Solution {
// public:
//     string clearDigits(string s) {
//         stack<char> st;

//         for (char ch : s) {
//             if (isdigit(ch)) {
//                 if (!st.empty()) {
//                     st.pop();
//                 }
//             } else {
//                 st.push(ch);
//             }
//         }

//         string ans;
//         while (!st.empty()) {
//             ans += st.top();
//             st.pop();
//         }

//         reverse(ans.begin(), ans.end());
//         return ans;
//     }
// };