#include<bits/stdc++.h>
using namespace std;

// brute force approach
// int longestsubstrwithatmostk(string s, int k){
//     int maxLength = 0;
//     for(int i = 0; i < s.size(); i++){
//         set<char> charSet;
//         for(int j = i; j < s.size(); j++){
//             charSet.insert(s[j]);
//             if(charSet.size() <= k){
//                 maxLength = max(maxLength, j - i + 1);
//             }
//             else break;
//         }
//     }
//     return maxLength;
// }

int longestsubstrwithatmostk(string s, int k){
    int maxLength = 0;
    int left = 0, right = 0;
    unordered_map<char, int> charCount;
    while(right < s.size()){
        charCount[s[right]]++;
        if(charCount.size() > k){
            charCount[s[left]]--;
            if(charCount[s[left]] == 0) charCount.erase(s[left]);
            left++;
        }
        maxLength = max(maxLength, right - left + 1);
        right++;
    }    
    return maxLength;
}

int main(){
    string s = "aaabbccd";
    int k = 2;
    longestsubstrwithatmostk(s, k);
}