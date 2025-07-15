/*
class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> ans;
        int cnt0 = 0, cnt1 = 0, cnt2 = 0;
            for (int num : nums) {
            if (num == 0) cnt0++;
            else if (num == 1) cnt1++;
            else cnt2++;
        }
             int i = 0;
        while (cnt0--) nums[i++] = 0;
        while (cnt1--) nums[i++] = 1;
        while (cnt2--) nums[i++] = 2;
        
        // for(auto it : ans){
        //     cout<<it<<" ";
        // }
    }
};



class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0, j = 0, k = nums.size()-1;
        while(j <= k){
            if(nums[j] == 2){
                swap(nums[k], nums[j]);
                k--;
            }
            else if(nums[j] == 0){
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
            else j++;
        }
    }
};
*/
