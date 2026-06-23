#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string decodeString(string s) {
        string ans = "";
        int num = 0;
        stack<int> numst;
        stack<string> charst;
        for(int i = 0;i < s.size();i++){
            if(isdigit(s[i])){
                num = num*10 + (s[i] - '0');
            }
            else if(s[i] == '['){
                numst.push(num);
                charst.push(ans);
                num = 0;
                ans = "";
            }
            else if(s[i] == ']'){
                int rep = numst.top();
                numst.pop();
                string prev = charst.top();
                charst.pop();
                string temp = "";
                for(int i = 0;i < rep; i++){
                    temp += ans; 
                }
                ans = prev + temp;
            }
            else{
                ans += s[i];
            }
        }
        return ans;
    }
};
int main(){
    string s1 = "3[a2[c]]";
    Solution s;
    cout<<s.decodeString(s1);
}