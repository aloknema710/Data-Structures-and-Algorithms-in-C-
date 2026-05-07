#include<bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int>& nums, int k){
    int n = nums.size();
    int count = 1;
    sort(nums.begin(),nums.end());
    int maxEle = nums[n-1];
    for (int i = 0; i < n; i++){
        if(nums[n - i - 1] != maxEle){
            maxEle = nums[n-i-1];
            count++;
        }
        if(count == k){
            return nums[n-i-1];
        }
    }
    return -1;
}

int findKthSmallest(vector<int>& nums, int k){
    int n = nums.size();
    int count = 0;
    sort(nums.begin(),nums.end());
    int minEle = nums[0];
    for (int i = 1; i < n; i++){
        if(nums[i] != minEle){
            minEle = nums[i];
            count++;
        }
        if(count == k-1){
            return nums[i];
        }

    }
    
    return -1;
}

int main(){
    vector<int> nums = {3,2,3,1,2,4,5,5,6};
    int k = 4;
    cout<<findKthLargest(nums,k)<<endl;
    cout<<findKthSmallest(nums,k);
}