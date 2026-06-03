#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0;
        int idx = 0;
        while(i < chars.size()){
            char curr = chars[i];
            int cnt = 1;
            while(i < chars.size() && curr == chars[i]){
                cnt++;
                i++;
            }
            chars[idx++] = curr;
            if(cnt>1){
                string cntStr = to_string(cnt);
                for(char c : cntStr){
                    chars[idx++] = c;
                }
            }
        }
        return idx;
    }
};

int main(){
    Solution s;
    vector<char> chars;     // chars = ["a","a","b","b","c","c","c"]
    cout<<s.compress(chars);
}