#include <bits/stdc++.h>
using namespace std;
// Input: n = 7  Output: true
// Input: n = 0  Output: false

bool num_is_odd(int n){
    return (n & 1) == 1;
}

int main(){
    cout<<num_is_odd(5);
}