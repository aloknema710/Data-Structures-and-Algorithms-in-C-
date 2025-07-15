#include<bits/stdc++.h>
using namespace std;
// // better solution using sliding window technique
// int longestSubarrayWithSumK(const vector<int>& arr, int k) {
//     int l = 0, r = 0, sum = 0, maxLength = 0;
//     while(r < arr.size()) {
//         sum = sum + arr[r];
//         while(sum > k){
//             sum = sum - arr[l];
//             l++;
//         }
//         if(sum <= k) {
//             maxLength = max(maxLength, r - l + 1);
//         }
//         r++;
//     }
//     return maxLength;
// }
// optimal solution using sliding window technique
int longestSubarrayWithSumK(const vector<int>& arr, int k){
    int l = 0, r = 0, sum = 0, maxLength = 0;
    while (r < arr.size()) {
        sum += arr[r];
        if (sum > k) {
            sum -= arr[l];
            l++;
        }
        if (sum <= k) {
            maxLength = max(maxLength, r - l + 1);
        }
        r++;
    }
    return maxLength;
}
int main(){
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<longestSubarrayWithSumK(arr, k) << endl;
    return 0;
}