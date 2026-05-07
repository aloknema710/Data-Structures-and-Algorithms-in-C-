#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        // Your code goes here
        if (n > 0 && (n & (n-1)) == 0){
            return true;
        }
        else return 0;
        
    }
};

int main(){
    Solution s;
    cout<<s.isPowerOfTwo(32);
}