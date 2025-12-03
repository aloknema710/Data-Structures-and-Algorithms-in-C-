#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        string ans;
        int A = a.length()-1;
        int B = b.length()-1;
        int carry = 0;
        while(A >= 0 || B >= 0 || carry){
            int sum = carry;
            if (A >= 0) sum += a[A] - '0';
            if (B >= 0) sum += b[B] - '0';
            ans += (sum % 2) + '0';      //  sum can never exceeds 3 so kept this
            carry = sum / 2;       // (1+1)/2 will increment carry 
            A--;
            B--;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};