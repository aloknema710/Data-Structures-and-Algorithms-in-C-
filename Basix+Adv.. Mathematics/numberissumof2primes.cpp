#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n<2) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;   //0
    }
    return true;       //1
}
bool issumprime(int n){
    for (int i = 2; i < n/2; i++){
        if (isprime(i) && isprime(n-i)){         // no. can only be written as sum of primes iff and only if 
        return true;     //1
        }
    }
    return false;         //0
}
int main(){
    int n;
    cin >> n;
    if(issumprime(n)){
        cout << "YES";
    }
    else{
        cout << "NO";
        }
        return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// // Function to check if a number is prime
// bool isprime(int n) {
//     if (n < 2) return false;  // 0 and 1 are not prime
//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0) return false;  // if divisible by any number, it's not prime
//     }
//     return true;  // n is prime
// }

// // Function to check if the number can be written as the sum of two primes
// bool issumprime(int n) {
//     // Check if there exist two primes p1 and p2 such that p1 + p2 = n
//     for (int i = 2; i <= n / 2; i++) {
//         if (isprime(i)) {
//             cout << "Checking if " << i << " and " << (n - i) << " sum to " << n << endl;
//             if (isprime(n - i)) {
//                 cout << "Found primes: " << i << " + " << (n - i) << " = " << n << endl;
//                 return true;  // n can be written as the sum of two primes
//             }
//         }
//     }
//     return false;  // n cannot be written as the sum of two primes
// }

// int main() {
//     int n = 74;  // You specified n = 74
//     if (issumprime(n)) {
//         cout << "YES";  // If the number can be written as the sum of two primes
//     } else {
//         cout << "NO";  // If the number cannot be written as the sum of two primes
//     }
//     return 0;
// }
