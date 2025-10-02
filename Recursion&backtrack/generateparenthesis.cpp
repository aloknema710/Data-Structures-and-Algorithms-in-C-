#include<bits/stdc++.h>
using namespace std;

class Solution {
    void func(vector<string>& ans, string curr, int o, int c, int n){
        if (curr.length() == 2 * n) {
            ans.push_back(curr);
            return;
        }
        if(o < n) func(ans, curr + "(", o + 1, c, n);
        if(c < o) func(ans, curr + ")", o, c + 1, n);
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        func(ans, "", 0, 0, n);
        return ans;
    }
};


/*
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        string current = "";
        dfs(result, current, 0, 0, n);
        return result;
    }

    void dfs(vector<string>& result, string& current, int openN, int closedN, int n) {
        if(openN == n && closedN == openN) {
            result.push_back(current);
            return;
        }

        if(openN < n) {
            current += '(';
            dfs(result, current, openN + 1, closedN, n);
            current.pop_back();
        }
        if(closedN < openN) {
            current+=')';
            dfs(result, current, openN, closedN + 1, n);
            current.pop_back();
        }
    }
};
*/