#include<bits/stdc++.h>
using namespace std;

int lengthmax(string s, int k){
    int left = 0, right = 0;
    int longest = 0, maxfreq = 0;
    int hash[26] = {0};
    while (right < s.size()) {
        hash[s[right] - 'A']++;
        maxfreq = max(maxfreq, hash[s[right] - 'A']);
        while((right - left + 1) - maxfreq > k){
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
int lengthmax(string s, int k){
//     int left = 0, right = 0;
//     int max_length = 0;
//     map<int,int> mpp;
//     while(right < s.size()){
//         mpp[s[right]]++;
//         if(mpp.size() > k){
//             mpp[s[left]]--;
//             if(mpp[s[left]] == 0) mpp.erase(s[left]);
//             left++;
//         }
//         max_length = max(max_length,right - left + 1);
//         right++;
//     }
//     return max_length;
// }
*/