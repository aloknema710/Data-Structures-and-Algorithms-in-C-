//Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer.

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        long long ans = 0;
        int i = 0, sign = 1, signcounter = 0;
        while(i < s.length() && s[i] == ' ') i++;
        if(i < s.length() && ((s[i] == '+') || (s[i] == '-'))){     // instead of while we can use if also 
            signcounter++;                                          //because there can be only one sign
            if(s[i] == '-') {
                sign = -1;
            }
            if(signcounter > 1) sign = 0;
            i++;
        }
        while(i < s.length() && isdigit(s[i])){
            ans = ans*10 + (s[i] - '0');
            if(sign * ans <= INT_MIN) return INT_MIN;
            if(sign * ans >= INT_MAX) return INT_MAX;        
            i++;
        }
        return sign*ans;
    }
};

int main(){
    string s = "   -42";
    Solution obj;
    cout << obj.myAtoi(s) << endl;
    return 0;
}


/*
class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int n= s.size();
        int sign=1;
        while(i<n && s[i]==' '){
            i++;
        }
        if(i<n && (s[i]=='-'||s[i]=='+')){
            sign= (s[i]=='-')? -1 :1;
            i++;
        }

        long result=0;
        while(i<n && isdigit(s[i])){
            result = result*10 + (s[i]- '0');
            if(sign==1 && result>INT_MAX){
                return INT_MAX;
            }
            else if(sign == -1 && -result<INT_MIN ){
                return INT_MIN;
            }
            i++;
        }

        return (sign*result);
    }
};
*/