#include <iostream>
#include <vector>
using namespace std;

// Function to generate Fibonacci series up to n terms
vector<int> fibonacci(int n) {
    vector<int> fib(n);
    // Handle the base cases
    if (n > 0) fib[0] = 0;  // First Fibonacci number
    if (n > 1) fib[1] = 1;  // Second Fibonacci number
    // Fill the Fibonacci series for n > 2
    for (int i = 2; i < n; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    return fib;
}

int main() {
    int t;
    cin >> t;  // Number of test cases
    
    while (t--) {
        int n;
        cin >> n;  // For each test case, input the value of n
        
        // Get the Fibonacci series for the given n
        vector<int> fib_series = fibonacci(n);
        
        // Print the Fibonacci series
        for (int i = 0; i < n; ++i) {
            cout << fib_series[i] << " ";
        }
        cout << endl;
    }

    return 0;
}