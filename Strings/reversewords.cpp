#include<bits/stdc++.h>
using namespace std;

// string reverseword(string str){
//     string rev = "";
//     for(int i = str.length()-1; i >= 0; i--){
//         rev = rev + str[i];
//     }
//     return rev;
// }

// string reverseword(string str){
//     int start = 0;
//     int end = str.length()-1;
//     while(start < end){
//         swap(str[start], str[end]);
//         start++;
//         end--;
//         }
//     return str;
// }

void reverse(string &str,int low,int high){    //pass string by reference since it is not returning any value V.V.Imp line 
    while(low<=high){
        swap(str[low],str[high]);
        low++;
        high--;
    }
}

string reverseword(string str){            // not passing by reference beacuse it is returning the new modified value
    int start = 0;
    for (int i = 0; i < str.size(); i++){
        if (str[i] == ' '){                        // V.V.Imp line
            reverse(str,start,i-1);
            start = i+1;
        }
    }   
    reverse(str,start,str.length()-1);      
    return str;     
}
int main(){
    string str = "Hello World";
    cout << reverseword(str) << endl;
    return 0;
}


/*
class Solution {
public:
    string reverseWords(string s) {
        // Step 1: Trim leading and trailing spaces
        int start = 0, end = s.size() - 1;
        while (start <= end && s[start] == ' ') start++;
        while (end >= start && s[end] == ' ') end--;
        if (start > end) return "";
        s = s.substr(start, end - start + 1);

        // Step 2: Split into words
        vector<string> words;
        string word;
        for (char c : s) {
            if (c == ' ') {
                if (!word.empty()) {
                    words.push_back(word);
                    word.clear();
                }
            } else {
                word += c;
            }
        }
        words.push_back(word); // Add the last word

        // Step 3: Reverse the words
        reverse(words.begin(), words.end());

        // Step 4: Join the words with a single space
        string result;
        for (int i = 0; i < words.size(); ++i) {
            if (i > 0) result += " ";
            result += words[i];
        }

        return result;
    }
};





class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int n = s.size();
        int left = 0;
        int right = 0;
        int i = 0;
        while (i < n) {
            while (i < n && s[i] == ' ')
                i++;
            if (i == n)
                break;
            while (i < n && s[i] != ' ') {
                s[right++] = s[i++];
            }
            reverse(s.begin() + left, s.begin() + right);
            s[right++] = ' ';
            left = right;
            i++;
        }
        s.resize(right - 1);
        return s;
    }
};



*/