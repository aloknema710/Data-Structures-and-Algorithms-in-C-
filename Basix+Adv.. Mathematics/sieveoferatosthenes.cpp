// Given a number n, print all primes smaller than or equal to n. It is also given that n is a small number. 
// Examples:
// Input: n = 10
// Output: 2 3 5 7
// Explanation: The prime numbers up to 10 obtained by Sieve of Eratosthenes are 2 3 5 7 .
// Input: n = 20
// Output: 2 3 5 7 11 13 17 19
// Explanation: The prime numbers up to 20 obtained by Sieve of Eratosthenes are 2 3 5 7 11 13 17 19 .
// Input: n = 30
// Output: 2 3 5 7 11 13 17 19 23 29
// Explanation: The prime numbers up to 30 obtained by Sieve of Eratosthenes are 2 3 5 7 11 13 17 19 23 29 .
// Time Complexity: O(n log log n) , Space Complexity: O(n).
//naive approach brute force
#include<bits/stdc++.h>
using namespace std;
int brutesol(int n){
    for(int i=2;i<=n;i++){
        bool flag=true;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                flag=false;
                break;
            }
        }
            if(flag){
                cout<<i<<" ";
            }
        }
    return 0;
}

int main(){
    int n;
    cin>>n;
    brutesol(n);
}

//Another brute sol
/*
#include <bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    
    
    vector<bool> prime(n + 1, true);         // 1

    for (int p = 2; p * p <= n; p++) {


        if (prime[p] == true) {             // 1
            
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;               // 0
        }
    }

    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}

// Driver Code
int main()
{
    int n = 30;
    SieveOfEratosthenes(n);
    return 0;
}
*/