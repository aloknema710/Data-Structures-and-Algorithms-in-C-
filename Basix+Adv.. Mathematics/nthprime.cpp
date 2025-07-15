#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n<2) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int findnthprime(int n){
    int count = 0;
    int primecount = 0;
    while (primecount<n){
    if(isprime(count)){
        primecount++;
    }
    if(primecount == n){
        break;
    }
    count++;
    }
    return count;
}
// int findnthprime(int n){
//     int count = 0, num = 2;
//     while (count < n) {
//         bool isprime = true;
//         for (int i = 2; i <= sqrt(num); i++) {
//             if (num % i == 0) {
//                 isprime = false;
//                 break;
//                 }
//             }
//             if (isprime) {
//                 count++;
//             }
//         num++;
//         }
//     return num - 1;
// }
int nthprime(int x,int y){
    int product = findnthprime(x)*findnthprime(y);
    return product;
}
int main(){
    int x, y;
    cin >> x >> y;
    cout<<nthprime(x,y);
}