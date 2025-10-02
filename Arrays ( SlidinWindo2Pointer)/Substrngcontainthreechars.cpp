#include<bits/stdc++.h>
using namespace std;    

class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        
        int l=0, r=0;
        int count=0 ;
        vector<int> arr(3);
        for(int r=0;r<n ;r++){
            arr[s[r]-'a']++;
            while(arr[0]>0 && arr[1]>0 && arr[2]>0){ // all substring ending at r
                count+= n-r;
                arr[s[l] -'a']--;
                l++;
            }
        }
        return count;
    }
};

int main(){
    Solution s;
    string str = "abcabc";
    cout<<s.numberOfSubstrings(str);
    return 0;
}

// brute force approach
// int numberOfSubstrings(string s) {
//     int count = 0;
//     for(int i = 0; i < s.size(); i++){
//         set<char> st;
//         for(int j = i; j < s.size(); j++){
//             st.insert(s[j]);
//             if(st.size() == 3){
//                 count += (s.size() - j);
//                break;
//             }
//         }
//     }
//     return count;
// }