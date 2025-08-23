#include<bits/stdc++.h>
using namespace std;    

class Solution {
public:
    string reversestring(string s){    // s = {apple, banana, cherry, date}
        string ans = "";
        int start = 0, end = s.size() - 1;
        while (start <= end && s[start] == ' ') start++;
        while (end >= start && s[end] == ' ') end--;
        if (start > end) return "";
        s = s.substr(start, end - start + 1);

        vector<string> words;
        string word;
        for(char c : s){
            if(c == ' '){
                    if (!word.empty()) {  // Only push if word is not empty
                    words.push_back(word);
                    word = "";
                }
            }
            else{
                word += c;
            }
        }
        words.push_back(word);   // last word
        reverse(words.begin(), words.end());  // {date, cherry, banana, apple}

        for(int i = 0; i < words.size(); i++){
           if(i > 0){
            ans += " ";
           } 
           ans += words[i];
        }
        return ans;
    }
};

int main() {
    Solution sol;
    cout << sol.reversestring("  hello   world  ") << endl;  // "world hello"
    cout << sol.reversestring("the sky is blue") << endl;     // "blue is sky the"
    cout << sol.reversestring("  ") << endl;                  // ""
    cout << sol.reversestring("a   b   c") << endl;           // "c b a"
    return 0;
}