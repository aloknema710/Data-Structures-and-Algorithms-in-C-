#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool asc = true;
        for (int i = 0; i < nums.size()-1 && asc; i++) {
            asc = nums[i] <= nums[i+1];
        }
        bool dec = true;
        for (int i = 0; i < nums.size()-1 && dec; i++) {
            dec = nums[i] >= nums[i+1];
        }
        return asc || dec;
    }
};

// class Solution {
// public:
//     bool isMonotonic(vector<int>& nums) {
//         bool increasing = true;
//         bool decreasing = true;

//         for (int i = 1; i < nums.size(); i++) {
//             if (nums[i] > nums[i - 1])
//                 decreasing = false;
//             if (nums[i] < nums[i - 1])
//                 increasing = false;
//         }

//         return increasing || decreasing;
//     }
// };