#include <bits/stdc++.h>
using namespace std;

int count_set_bits(int n){
    int cnt = 0;
    while(n != 0){
        // if((n & 1) == 1) cnt++;
        n = n & (n - 1); // removes lowest set bit and iterates only on set bits 
        // When you do:

        // n - 1
        // flips all bits after the rightmost 1
        // and flips that 1 → 0
        cnt++;
        n>>=1;
    }
    return cnt;
}

int main(){
    count_set_bits(7);
}