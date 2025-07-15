/*
Input: n = 8, nums = [7, 7, 7, 7, 13, 11, 12, 7], m = 2, k = 3
Output: 12

Explanation: On the 12th the first 4 flowers and the last 3 flowers would have already bloomed.
 So, we can easily make 2 bouquets, one with the first 3 and another with the last 3 flowers.

Input: n = 5, nums = [1, 10, 3, 10, 2], m = 3, k = 2
Output: -1

Explanation: If we want to make 3 bouquets of 2 flowers each, we need at least 6 flowers.
 But we are given only 5 flowers, so, we cannot make the bouquets.
*/
#include<bits/stdc++.h>
using namespace std;

// bool possible(vector<int> arr, int day, int m, int k){
//     int cnt = 0;
//     int noOfB = 0;
//     // count the number of bouquets:
//     for (int i = 0; i < arr.size(); i++) {
//         if (arr[i] <= day) {
//             cnt++;
//         }
//         else {
//             noOfB += (cnt / k);
//             cnt = 0;
//         }
//     }
//     noOfB += (cnt / k);
//     return noOfB >= m;
// }

// int roseGarden(vector<int> arr, int k, int m){
//     if((m*k)>arr.size()) return -1;
//     int mini = INT_MAX, maxi = INT_MIN;
//     for (int i = 0; i < arr.size(); i++) {
//         mini = min(mini, arr[i]);
//         maxi = max(maxi, arr[i]);
//     }
//     for (int i = mini; i <= maxi; i++){
//         if(possible(arr,i,m,k)) return i;
//     }
//     return -1;
// }

bool possible(vector<int> arr, int day, int m, int k){
    int cnt = 0;
    int noOfB = 0;
    // count the number of bouquets:
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] <= day) {
            cnt++;
        }
        else {
            noOfB += (cnt / k);
            cnt = 0;
        }
    }
    noOfB += (cnt / k);
    return noOfB >= m;
}

int roseGarden(vector<int> arr, int k, int m){
    if((m*k)>arr.size()) return -1;
    int mini = INT_MAX, maxi = INT_MIN;
    for (int i = 0; i < arr.size(); i++) {
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }

    //apply binary search:
    int low = mini, high = maxi;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (possible(arr, mid, m, k)) {
            high = mid - 1;
        }
        else low = mid + 1;
    }
    return low;
}

int main()
{
    vector<int> arr = {7, 7, 7, 7, 13, 11, 12, 7};           // these are blooming days for ith flower
    int k = 3;                                 // adjacent flowers required to make a bouquet
    int m = 2;                                  // no.of bouquets
    int ans = roseGarden(arr, k, m);            // min@ days required s.t you have ample no. of flowers to make m bouquet.
    if (ans == -1)
        cout << "We cannot make m bouquets.\n";
    else
        cout << "We can make bouquets on day " << ans << "\n";
    return 0;
}