#include<bits/stdc++.h>
using namespace std;
// very inefficient solution
// long long factorials(int n){
//     long long fact = 1;
//     for (int i = 1; i <= n; i++) {
//         fact = fact * i;
//         }
//         return fact;
// }
// int findtrailingzerobrute(int n){
//     int count = 0;
//     long long value = factorials(n);
//     while (value % 10 == 0){
//         count++;
//         value /= 10;
//     }
//     return count;
// }
/*
insufficient solution is not going to run even if we use long long instead of int
because the factorial of 100 is 9.332621544394415e+157
function is only going to return values till n = 20 for long long and 
for int i will not go beyond n = 13.
*/

// efficient solution
int findtrailingzerobrute(int n){
    int count = 0;
    while (n / 5 >= 1) {
        count += n/5;                // because 5 decides the no. of trailing zeroes in factorials
        n /= 5;
    }
    return count;
}


int main(){
    int n;
    cin >> n;
    cout<<findtrailingzerobrute(n);
}