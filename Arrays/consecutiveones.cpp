#include<bits/stdc++.h>
using namespace std;

int findconsecones(vector<int>& nums) {
    int n = nums.size();
    int count = 0;
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == 0) {
            count = 0;
        }
        else {
            count++;
            res = max(res, count);
        }
    }
    return res;
}

int main() {
    vector<int> nums;
    // nums.push_back(0);
    // nums.push_back(1);
    // nums.push_back(1);
    // nums.push_back(0);
    // nums.push_back(1);
    // nums.push_back(1);
    // nums.push_back(1);
    for(auto it: nums){
        cin>>it;
    }

    int result = findconsecones(nums);  // Get the result from the function
    cout << "Longest sequence of consecutive 1s: " << result << endl;

    return 0;
}
