#include<bits/stdc++.h>
using namespace std;

int removdups2(vector<int>& arr){
    // vector<int>ans;
    if (arr.empty()) return 0;
    int j = 0;
    for(int i = 0; i < arr.size(); i++){
        if(j < 2 || arr[i] != arr[j - 2]){
            arr[j] = arr[i];
            j++;
        }
    }
    return j;
}

int main(){
    vector<int>arr = {0,0,0,1,1,1,1,2,3,3,3};
    cout << removdups2(arr);

}

/*
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ptr = 2;

        if(nums.size() <= 2) return nums.size();
        
        for(int i = 2; i < nums.size(); i++){
            if(nums[i] != nums[ptr-2]){
                nums[ptr] = nums[i];
                ptr++;
            }
        }

        return ptr;

    }
};
*/