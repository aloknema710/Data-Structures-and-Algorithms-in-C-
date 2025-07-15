#include<bits/stdc++.h>
using namespace std;
// vector<vector<int>>fourSum(vector<int>nums,int target){
//     set<vector<int>> st;
//     for (int i = 0; i < nums.size(); i++){
//         for (int j = i + 1; j < nums.size(); j++){
//             set<int> hashset;
//             for (int k = j + 1; k < nums.size(); k++){
//                 int sum = nums[i] + nums[j] + nums[k];
//                 int fourth = target - (sum);
//                 if (hashset.find(fourth) != hashset.end()){
//                     vector<int> temp = {nums[i],nums[j],nums[k],fourth};
//                     sort(temp.begin(), temp.end());
//                     st.insert(temp);
//                 }
//                 hashset.insert(nums[k]);
//             }
//         }
//     }
//     vector<vector<int>> ans;
//     for (auto it : st){
//         ans.push_back(it);
//     }
//     return ans;
// }

vector<vector<int>>fourSum(vector<int>nums,int target){
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans;
    for (int i = 0; i < nums.size(); i++){
        if(i>0 && nums[i] == nums[i-1]) continue;         // most important line 
        for (int j = i + 1; j < nums.size(); j++){
            if(j>i+1 && nums[j] == nums[j-1]) continue;     // most important line  
            int left = j + 1;
            int right = nums.size() - 1;
            while (left < right){
                int sum = nums[i] + nums[j] + nums[left] + nums[right];
                if (sum == target){
                    vector<int> temp = {nums[i],nums[j],nums[left],nums[right]};
                    ans.push_back(temp);
                    left++;
                    right--;
                    while (left < right && nums[left] == nums[left - 1])  left++;
                    while (left < right && nums[right] == nums[right+1]) right--;
                }
                else if (sum < target){
                    left++;
                }
                else {
                    right--;
                }
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> nums = {4, 3, 3, 4, 4, 2, 1, 2, 1, 1};
    int target = 9;
    vector<vector<int>> answer = fourSum(nums, target);
    cout << "The quadruplets are: \n";
    for (auto it : answer) {
        cout << "[";
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;
}