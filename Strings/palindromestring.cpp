#include<bits/stdc++.h>
using namespace std;
bool my_isalnum(char c) {
    // Check if character is a letter (uppercase or lowercase) or a digit
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9')) {
        return true;
    }
    return false;
}
bool checkpalindrome(string str,int n){
    int i=0,j=n-1;
    /*   // Convert string to lowercase
        for (auto& x : str) {
            x = tolower(x);
        }
        // Convert string to lowercase using std::transform
        std::transform(str.begin(), str.end(), str.begin(), ::tolower);
        
        // Convert string to lowercase using a loop
    */
    while(i<=j){
        // Skip non-alphanumeric characters from the left side
        if (!isalnum(str[i])) {
            i++;
            continue;
        }
        
        // Skip non-alphanumeric characters from the right side
        if (!isalnum(str[j])) {
            j--;
            continue;
        }
        if(str[i]!=str[j]) return false;
        i++;
        j--;
        }
        return true;
}     // only numbers and characters are considered here not special charcaters i.e they should be alphanumeric
        //
int main(){
    string str;
    cin >> str;
    int n = str.length();
    int arr[n];
    cout<<checkpalindrome(str,n);
}

/*
class Solution {
public:
    bool isPalindrome(string s) {
        string res;
        for (char c : s) {
            if (isalnum(c)) {
                res += tolower(c);
            }
        }

        int left = 0, right = res.length() - 1;
        while (left < right) {
            if (res[left] != res[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
};
*/

/*class Solution {
public:
    bool isPalindrome(string s) {
        //Two Pointer Approach
        int left=0;
        int right=s.length()-1;
        while(left<right){
            while(left<right && !isalnum(s[left])){
                left++;
            }
            while(left<right && !isalnum(s[right])){
                right--;
            }
            if(tolower(s[left])!=tolower(s[right])){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};*/