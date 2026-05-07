#include<bits/stdc++.h>
using namespace std;

class Solution{    
public:    
    int singleNumber(vector<int>& nums){
        int ans;
        for (int i = 0; i < nums.size(); i++){
            ans = ans^nums[i];
        }
        
        return ans;
    }
};

int main(){
    Solution s;

    vector<int> arr;
    s.singleNumber(arr);
}