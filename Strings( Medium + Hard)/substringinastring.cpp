#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle) {
    size_t pos = haystack.find(needle);
    if (pos != string::npos) {   // Check if the substring is found 
        return pos; // Return the index of the first occurrence
    } 
    return -1;
}

int main() {
	// your code goes here
    string haystack = "vghjbutsad";
    string needle = "sad";
    cout<<strStr(haystack,needle);
}
 //notes :
 /*
    if (pos != string::npos) {
This checks if the search was successful.
string::npos is the sentinel value (usually equal to -1 as an unsigned number, i.e., a very large number) that indicates "not found".
So, pos != string::npos means: the substring was found.

Why Use static_cast<int>?
Because size_t is unsigned, and we can't return -1 using size_t directly.
Many functions that return an index use int, and -1 is a common return value to indicate "not found".
So we cast to int to unify the return type and make it compatible with -1.
 */