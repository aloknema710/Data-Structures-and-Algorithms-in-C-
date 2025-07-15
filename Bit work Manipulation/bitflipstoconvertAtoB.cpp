// class Solution {
// public:
//     int minBitFlips(int start, int goal) {
//         int flips = 0;
//         int xor1 = start^goal;
//         while(xor1 > 0){
//             xor1 = xor1 & (xor1 - 1);
//             flips++;
//         }
//         return flips;
//     }
// };

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