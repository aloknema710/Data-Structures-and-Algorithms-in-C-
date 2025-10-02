#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

long long fastPow(long long base, long long exp, int mod) {
    long long result = 1;
    base %= mod;         // for very large result 
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod; 
        }
        base = (base * base) % mod; // 5*5 / 4*4  beacause repetition is allowed here. (basic permutation)
        exp /= 2;
    }
    return result;
}

int countGoodNumbers(long long n) {
    long long even_positions = (n + 1) / 2;    // even &
    long long odd_positions = n / 2;        // odd positions
    long long even_choices = fastPow(5, even_positions, MOD);// 5-> no.of values, these 5values can be arranged at even pos's 
    long long odd_choices = fastPow(4, odd_positions, MOD);// 4-> no.of values(prime single digits), these 4values can be arranged at odd pos's
    return (even_choices * odd_choices) % MOD;          // will return the total number of good numbers
}

int main() {
    long long n;
    cin >> n;
    cout << countGoodNumbers(n) << endl;
    return 0;
}