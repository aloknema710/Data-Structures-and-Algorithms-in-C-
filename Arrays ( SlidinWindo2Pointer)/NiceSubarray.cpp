// class Solution {
// public:
//     int numberOfSubarrays(vector<int>& nums, int k) {
//         return helper(nums,k) - helper(nums,k-1);
//     }
// private:
//     int helper(vector<int>& nums, int k){
//         int l=0,r=0,count=0,subcount=0;
//         while (r<nums.size()){
//             if (nums[r]%2 !=0) count++;

//             while (count>k){
//                 if (nums[l]%2 !=0)count--;
//                 l++;
//             }
//             subcount+=(r-l+1);
//             r++;
//         }
//         return subcount;
//     }
// };