#include<bits/stdc++.h>
using namespace std;

class Solution {
    string expand(string s, int idxl, int idxr){
        while(idxl >= 0 && idxr < s.size() && s[idxl] == s[idxr]){
            idxl--;
            idxr++;
        }
        return s.substr(idxl+1,idxr-idxl-1);
    }
public:
    string longestPalindrome(string s) {
        string ans = "";
        for(int i = 0; i < s.length(); i++){
            string po = expand(s,i,i);
            string pe = expand(s,i,i+1);
            string longer = (po.length() > pe.length()) ? po : pe;
            if (longer.length() > ans.length()) {
                ans = longer;
            }
        }

        return ans;
    }
};

int main(){
    string str = "babad";
    Solution s;
    cout<<s.longestPalindrome(str);
}