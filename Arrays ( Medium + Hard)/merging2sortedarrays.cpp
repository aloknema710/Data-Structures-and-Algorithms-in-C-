/*
// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         vector<int> nums3(m + n);  // Use vector instead of VLA
//         int left = 0, right = 0, index = 0;
//         while (left < m && right < n) {
//             if (nums1[left] < nums2[right]) {
//                 nums3[index++] = nums1[left++];
//             } else {
//                 nums3[index++] = nums2[right++];
//             }
//         }
//         while (left < m) nums3[index++] = nums1[left++];
//         while (right < n) nums3[index++] = nums2[right++];

//         // Write merged result back to nums1
//         for (int i = 0; i < m + n; i++) {
//             nums1[i] = nums3[i];
//         }
//     }
// };
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums3(m + n);
        int left = 0, right = 0, index = 0;
        while(left < m && right < n){
            if(nums1[left] < nums2[right]){
                nums3[index++] = nums1[left++];
                // left++;index++;
            }
            else{
                nums3[index++] = nums2[right++];
                // right++;index++;
            }
        }
        while(left < m) nums3[index++] = nums1[left++];
        while(right < n) nums3[index++] = nums2[right++];

        for(int i = 0;i < n + m;i++){
            // if(i < m)
             nums1[i] = nums3[i];
             
            // else nums2[i - n] = nums3[i];
        }
    }
};
*/