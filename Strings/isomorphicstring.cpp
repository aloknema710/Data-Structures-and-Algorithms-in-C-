#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool isIsomorphic(string s, string t) {
    if (s.length() != t.length()) return false;
    unordered_map<char, char> mapST, mapTS;
    for (int i = 0; i < s.length(); ++i) {
        char c1 = s[i], c2 = t[i];
        if ((mapST.count(c1) && mapST[c1] != c2) ||
            (mapTS.count(c2) && mapTS[c2] != c1)) {      // if the mapping is inconsistent 
            return false;
        }
        mapST[c1] = c2;                                // map from s to t
        mapTS[c2] = c1;                               // map from t to s                                
    }
    return true;
}

int main() {
    string s, t;
    cout << "Enter first string: ";
    cin >> s;
    cout << "Enter second string: ";
    cin >> t;
    if (isIsomorphic(s, t))
        cout << "The strings are isomorphic." << endl;
    else
        cout << "The strings are not isomorphic." << endl;
    return 0;
}

// deep dive:
/*
🔬 Detailed Breakdown of the if Statement:
Part 1: mapST.count(c1) && mapST[c1] != c2
This checks from s to t:
mapST.count(c1) checks if the current character c1 from s was already mapped before.
If so, then mapST[c1] != c2 checks if the previous mapping is different from the current character c2 in t.
✔️ If c1 was mapped before, but to a different character, this is inconsistent, so return false.

Part 2: mapTS.count(c2) && mapTS[c2] != c1
This checks from t to s (reverse direction):
mapTS.count(c2) checks if c2 from t was already mapped.
If so, mapTS[c2] != c1 checks if it was mapped to a different character in s.
✔️ If c2 was mapped before, but not to the current c1, this is also inconsistent, so return false.
*/

/*
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        unordered_map<char,char>mp;
        unordered_map<char,int>vis;
        for(int i = 0;i<n;i++){
            char c = s[i];
            char d = t[i];
            if(!mp.count(c)){
                if(vis[d])return false;
                vis[d] = 1;
                mp[c] = d;
            }
            else{
                if(mp[c] != d){return false;}
            }
        }
        return true;
    }
};
*/