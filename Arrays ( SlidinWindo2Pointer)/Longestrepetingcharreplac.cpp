#include<bits/stdc++.h>
using namespace std;

int lengthmax(string s, int k){
    int left = 0, right = 0;
    int longest = 0, maxfreq = 0;    // maxfreq tracks highest occuring char.. in window
    int hash[26] = {0};
    while (right < s.size()) {
        hash[s[right] - 'A']++;
        maxfreq = max(maxfreq, hash[s[right] - 'A']);
        while((right - left + 1) - maxfreq > k){        // 
            hash[s[left] - 'A']--;
            maxfreq = 0;
            for(int i = 0; i < 26; i++){
                maxfreq = max(maxfreq, hash[i]);
            }
            left++;
        }
        if((right - left + 1) - maxfreq <= k){
            longest = max(longest, right - left + 1);
        }
        right++;
    }
    return longest;
}

int main(){
    string s = "AABABBA";
    int k = 2;      // no. of replacement of chars.. allowed
    cout<<lengthmax(s,k);
}


/*
class Solution {
public:
    int characterReplacement(string s, int k) {
        int longest = 0, left = 0, right = 0, maxfreq = 0;
        int hash[26] = {0};
        while(right < s.size()){
            hash[s[right] - 'A']++;
            maxfreq = max(maxfreq,hash[s[right] - 'A']);
            int replacemnt = (right - left + 1) - maxfreq;
            if(replacemnt > k){
                hash[s[left] - 'A']--;
                left++;
            }
            longest = max(longest,right-left+1);
            right++;
        }
        return longest;
    }
};


class Solution {
public:
    int characterReplacement(string s, int k) {
        map<char, int> charcount;
        int maxf = 0;
        int l = 0;
        int res = 0;
        for(int r = 0; r < s.size(); r++){
            charcount[s[r]]++;
            maxf = max(maxf, charcount[s[r]]);
            while((r-l+1)-maxf > k){
                charcount[s[l]] -= 1;
                l += 1;
            }
            res = max(res, (r-l+1));
        }
        return res;
    }
};
*/