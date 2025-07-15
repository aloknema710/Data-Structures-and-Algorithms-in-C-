#include<bits/stdc++.h>
using namespace std;
int missingnum(vector<int> v, int n) {
    int sum1 = (n * (n + 1)) / 2;  // Sum of numbers from 1 to n
    int sum2 = 0;
    for (int i = 0; i < v.size(); i++) {
        sum2 += v[i];  // Sum of numbers in the vector
    }
    return (sum1 - sum2);  // The missing number is the difference
}
int optimalmissingnum(vector<int> v,int n){
    int xor1 = 0, xor2 = 0;
    for (int i = 0; i < n; i++){
        xor1 = xor1 ^ v[i];
        xor2 = xor2 ^ (i+1);
    }
    return xor1^xor2;
}
int main() {
    int n = 5;
    vector<int> v = {1, 2, 4, 5};  // Vector with a missing number
    // Print the missing number
    cout << missingnum(v, n) << endl;
    cout << optimalmissingnum(v, n) << endl;
    return 0;
}