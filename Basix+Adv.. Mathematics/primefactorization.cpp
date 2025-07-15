#include<bits/stdc++.h>
using namespace std;

void primefactors(int n) {
    if (n <= 1) {
        cout << "not possible";
        return;
    }

    bool found = false;
    
    // Check for 2 separately to handle even numbers first
    while (n % 2 == 0) {
        cout << 2 << " ";
        n /= 2;
        found = true;
    }

    // Check for odd factors from 3 to sqrt(n)
    for (int i = 3; i * i <= n; i += 2) {                     // important line of code
        while (n % i == 0) {                      // While i divides n, print i and divide n by i till n is no longer divisible by i
            cout << i << " ";
            n /= i;
            found = true;
        }
    }

    // If n is still greater than 2, then it's a prime number
    if (n > 2) {
        cout << n;
        found = true;
    }

    // If no factors were found, print the message
    if (!found) {
        cout << "not possible";
    }
}

int main(){
    int n;
    cin >> n;
    primefactors(n);
    return 0;
}

/*
#include <bits/stdc++.h> 
#include <iostream>
using namespace std;


vector<int> getPrimeFactors(int n){ 
    // Declare a vector to store
    // the prime factors of n.
    vector<int> primeFactors; 
    
    // Loop from 2 up to n
    for(int i = 2; i*i <= n; i++){
        // Check if n is divisible by i
        if(n % i == 0){
            // If divisible, add i to
            // the primeFactors vector
            // primeFactors.push_back(i);
        // Continue dividing n by i
        // until it's no longer divisible    --> mostest veryest imp.. line of code
        while(n % i == 0){ 
            primeFactors.push_back(i);
            n = n / i;
            }
        }    
    }
    if(n > 1) primeFactors.push_back(n);
    // Return the vector
    // containing the prime factors of n.
    return primeFactors; 
}
int main() {
    int n = 60;
    vector<int> ans = getPrimeFactors(n);
    cout << "Prime Factors for " << n << ": ";
    for(auto factor: ans){
        cout << factor << " ";
    }
    cout << endl;
}
*/
