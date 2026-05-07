#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int flips = 0;            // here xor operation is gonna provide us 1 at positions where
                                    // the bit is different between start and goal
        int xor1 = start^goal;   // 1^7 = 001^111 = 110 (i.e  6)
        while(xor1 > 0){
            xor1 = xor1 & (xor1 - 1);      // 110 & 101 = 100, 100 & 011 = 000
            flips++;                     // flips = 1, 2-> flips required 
        }
        return flips;
    }
};

/*
class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans = start^goal;
        int count=0;
        while(ans>0){
            if(ans & 1) count++;
            ans= ans>>1;
         }
         return count;
    }

};
*/


int main(){
    Solution s;
    cout<<s.minBitFlips(1,7)<<endl;
}