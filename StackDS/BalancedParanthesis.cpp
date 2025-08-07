#include<bits/stdc++.h>
using namespace std;

bool isBalanced(string s){         // O(n) time complexity, O(n) space complexity
    stack<char> st;
    for(int i=0;i<s.length();i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        }
        else{
            if(st.empty()) return false; // if stack is empty and we encounter a closing bracket, it's unbalanced
            char top = st.top();
            st.pop();
            if((s[i] == ')' && top != '(') || s[i] == '}' && top != '{' || (s[i] == ']' && top != '[')){
                return false; // if the top of the stack doesn't match the corresponding opening bracket, it's unbalanced
            }
        }
    }
}

int main(){
    string s = "(){[()]}";
    if(isBalanced(s)){
        cout << "The string is balanced" << endl;
    } else {
        cout << "The string is not balanced" << endl;
    }
}


/*
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
                if (st.empty()) return false;

                char top = st.top();
                if ((ch == ')' && top == '(') ||
                    (ch == '}' && top == '{') ||
                    (ch == ']' && top == '[')) {
                    st.pop();
                } else {
                    return false;
                }
            }
        }

        return st.empty();
    }
};
*/