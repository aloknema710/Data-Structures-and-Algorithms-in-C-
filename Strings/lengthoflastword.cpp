#include<bits/stdc++.h>
using namespace std;

    int lengthOfLastWord(string s) {
        int length = 0;
        int start = 0, end = s.size() - 1;
        while (start <= end && s[start] == ' ') start++;
        while (end >= start && s[end] == ' ') end--;
        if (start > end) return -1;
        s = s.substr(start, end - start + 1);        
        for(int i = s.length()-1;i>=0;i--){
            if(s[i] != ' ') length++;
            
            else break;
        }
        return length;
    }

int main(){
    string s = "Hello World";
    int length = lengthOfLastWord(s);;
    cout << "Length of the last word: " << length << endl;
    return 0;
}