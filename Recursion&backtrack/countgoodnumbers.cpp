#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

long long fastPow(long long base, long long exp, int mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int countGoodNumbers(long long n) {
    long long even_positions = (n + 1) / 2;
    long long odd_positions = n / 2;
    long long even_choices = fastPow(5, even_positions, MOD);
    long long odd_choices = fastPow(4, odd_positions, MOD);
    return (even_choices * odd_choices) % MOD;          // will return the total number of good numbers
}

int main() {
    long long n;
    cin >> n;
    cout << countGoodNumbers(n) << endl;
    return 0;
}