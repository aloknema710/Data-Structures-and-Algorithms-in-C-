#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        if (nums.size() == 1) {
        return 1;
    }
        sort(nums.begin(),nums.end());
        int left = 0;
        long long totalIncrements = 0;
        int maxFreq = 0;
        for (int right = 1; right < nums.size(); ++right) {
             // Calculate the total increments needed to make all
             // elements in [left, right] equal to nums[right]
            totalIncrements+=(long long)(nums[right]-nums[right-1])*(right-left);
            
            while(totalIncrements > k){
                totalIncrements -= (long long)(nums[right] - nums[left]);
                left++;
            }

            maxFreq = max(maxFreq, right - left + 1);
        }
        return maxFreq;
    }
};