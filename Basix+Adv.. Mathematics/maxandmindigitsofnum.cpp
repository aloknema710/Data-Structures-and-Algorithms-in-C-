#include<bits/stdc++.h>
using namespace std;
// int findmaxdigit(int n){
//     int maxdigit = 0;
//     while(n > 0){
//         int digit = n % 10;
//         maxdigit = max(maxdigit, digit);
//         n = n / 10;
//         }
//         return maxdigit;
// }
// int findmindigit(int n){
//     int mindigit = INT_MAX;
//     while(n > 0){
//         int digit = n % 10;
//         mindigit = min(mindigit, digit);
//         n = n / 10;
//         }
//         return mindigit;
// }
// pair<int,int> maxandmindigits(int n){
//     int max = findmaxdigit(n);
//     int min = findmindigit(n);
//     return{max,min};
// }
pair <int , int> maxandmindigits(int n){
    int max = 0, min = INT_MAX;
    while(n > 0){
        int digit = n % 10;
        max = max > digit ? max : digit;       // or else we can use max(max,digit)
        min = min < digit ? min : digit;       // same as above min can also be used.
        n = n / 10;
        }
        return{max,min};
}
int main(){
    int n;
    cin >> n;
    pair<int, int> result = maxandmindigits(n);
    cout << "Max Digit: " << result.first << ", Min Digit: " << result.second << endl;
}