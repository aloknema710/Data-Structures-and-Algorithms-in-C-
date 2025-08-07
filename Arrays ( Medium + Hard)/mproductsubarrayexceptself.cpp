#include<bits/stdc++.h>
using namespace std;

// Brute force approach to calculate product of all elements except self 
// vector<int> func(vector<int>& arr) {
//     vector<int> ans(arr.size(), 1);
//     for (int i = 0; i < arr.size(); i++) {
//         int product = 1;
//         for (int j = 0; j < arr.size(); j++) {
//             if (i != j) { // skip the current index
//                 product *= arr[j];
//             }
//         }
//         ans[i] = product; // store the product of all elements except the current one
//     }
//     return ans;
// }

// Optimized approach using prefix and suffix products
vector<int> func(vector<int>& arr) {
    vector<int> ans(arr.size(), 1);
    int prefix_product = 1;
    int suffix_product = 1;
    for(int i = 0; i < arr.size(); i++){
        ans.push_back(prefix_product); // store the prefix product
        prefix_product = prefix_product * arr[i];     // update prefix product with current element
    }
    for(int i = arr.size() - 1; i >= 0; i--){
        ans[i] = ans[i] * suffix_product; // update the answer with suffix product
        suffix_product = suffix_product * arr[i]; // update suffix product with current element
    }
    return ans;
}

int main(){
    vector<int> arr = {1,2,3,4};
    vector<int> result = func(arr);
    for(auto it : result){
        cout << it << " ";
    }
}

//
/*
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1); // Initialize result with 1s

        int prefix = 1, suffix = 1;
        int i = 0, j = n - 1;

        while (i < n) {
            ans[i] *= prefix;
            prefix *= nums[i];

            ans[j] *= suffix;
            suffix *= nums[j];

            ++i;
            --j;
        }

        return ans;
    }
};

*/