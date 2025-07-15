#include<bits/stdc++.h>
using namespace std;

// int subarraysWithXorK(vector<int> a, int k){
//     int count = 0;
//     for (int i = 0; i < a.size(); i++){
//         int xorr = 0;
//         for (int j = i; j < a.size(); j++){
//             xorr = a[j] ^ xorr ;                  // xorr = a[i]^a[j]; will not be implemented
//             if (xorr == k) count++;
//         }
//     }
//     return count;
// }

int subarraysWithXorK(vector<int> a, int k){
    int count = 0;
    int xorr = 0;
    map<int ,int>mpp;
    mpp[xorr]++;
    for (int i = 0; i < a.size(); i++){
        xorr = xorr ^ a[i];
        count += mpp[xorr ^ k];
        mpp[xorr]++;
    }
    return count;
}

int main(){
    vector<int> a = {4, 2, 2, 6, 4};
    int k = 6;
    int ans = subarraysWithXorK(a, k);
    cout << "The number of subarrays with XOR k is: "<< ans << "\n";
    return 0;
}