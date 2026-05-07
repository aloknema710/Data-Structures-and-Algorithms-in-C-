#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverseBits(int n) {
        int answer = 0;
        for(int i = 0; i < 32; i++){
            answer <<= 1;       //0,01,010,0101.... and so on
            answer |= (n & 1);  //0|(10&1), 0|(5&1), 2 |(2&0), 4|(1&1)
            n >>= 1;            // 5,2,1,0
        }
        // string bit1 = "";
        // while(n!=0){
        //     if((n&1) == 1) bit1 = bit1 + '1';
        //     else bit1 = bit1 + '0';
        //     n>>=1;
        // }
        // // cout<<bit1<<endl;
        // int l = bit1.length();
        // for(int i = 0;i < l;i++){
        //     answer = answer * 2 + (bit1[l-i-1] - '0');
        // }
        return answer;
    }
};

int main(){

}