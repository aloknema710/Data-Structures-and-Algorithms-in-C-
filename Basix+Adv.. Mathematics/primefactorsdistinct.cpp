#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n<2) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
    return true;
}
void primefactors(int n){
    if(n == 0 || n ==1) cout<<"not possible";
    if(isprime(n)) cout<<n;
    
    for (int i = 2; i < n; i++){
        if(n % i == 0 && isprime(i)){
            cout<<i<<" ";
        }
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
    for(int i = 2; i <= n; i++){
        // Check if n is divisible by i
        if(n % i == 0){
            // If divisible, add i to
            // the primeFactors vector
            primeFactors.push_back(i);
        }
        // Continue dividing n by i
        // until it's no longer divisible    --> mostest veryest imp.. line of code
        while(n % i == 0){ 
            n = n / i;
        }
    }
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