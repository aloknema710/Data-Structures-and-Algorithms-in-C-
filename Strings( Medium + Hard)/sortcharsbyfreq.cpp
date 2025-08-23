#include<bits/stdc++.h>
using namespace std;

string frequencySort(string s) {
    string ans = "";
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++){
        hash[s[i]]++;
    }
    vector<pair<int, char>> v;
    for (int i = 0; i < 256; i++){
        if (hash[i] != 0){
            v.push_back({hash[i], (char)i});
        }
    }
    sort(v.rbegin(), v.rend());     // Step 4: Sort by frequency (descending) 1. by frequency 2. by character
    for (auto it : v){
        ans += string(it.first, it.second);    // It creates a string made of count number of character.
    }                       // string s = string(3, 'a');  // => "aaa" 
    return ans;            // string(it.first, it.second) = string(3, 'c') = "ccc"
}                            //ans += "ccc";  // Adds "ccc" to the final result

int main(){
    string s = "tree";
    cout<<frequencySort(s);
}