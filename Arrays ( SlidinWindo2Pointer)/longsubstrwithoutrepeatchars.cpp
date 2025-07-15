#include<bits/stdc++.h>
using namespace std;
int func(string s){
    // brute force approach
    int res = INT_MIN;
    for(int i = 0; i < s.length(); i++){
        int hash[256] = {0};
        for(int j = i; j < s.length(); j++){
            if(hash[s[j]] == 0){          // if the character is not repeating marking it as seen
                hash[s[j]]++;
                // res = max(res, s.substr(i, j - i + 1));    statement is to find the maximum length substring (returning the longest substring without repeating characters)
                res = max(res,j-i+1);
            } else {
                break; // if we find a repeating character, break the inner loop
            }
        }
    }
    return res;
}

int optfunc(string s) {
    int res = 0;  // Start with res as 0 since the smallest substring has a length of 0
    int left = 0, right = 0;
    map<char, int> hash;  // Store the last index of each character

    while (right < s.length()) {
        // If the character exists in the map and its last index is >= left
        if (hash.find(s[right]) != hash.end() && hash[s[right]] >= left) {
            left = hash[s[right]] + 1;  // Move the left pointer to the right of the last occurrence
        }
        
        // Update the result with the maximum length of substring found so far
        res = max(res, right - left + 1);
        
        // Update the last index of the current character
        hash[s[right]] = right;

        // Move the right pointer
        right++;
    }
    
    return res;
}
int main(){
    string s = "cadbzabcd";
    cout<<optfunc(s);
}