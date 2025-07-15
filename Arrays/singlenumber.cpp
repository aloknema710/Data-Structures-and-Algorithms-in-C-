/*
class Solution {
public:
    int singleNumber(vector<int>& nums) {
            
        for(int i = 0;i <nums.size();i++){
        int cnt = 0;        
            int num = nums[i];
            for(int j = 0;j <nums.size();j++){
                if(nums[j] == num) cnt++;
            }
            if(cnt == 1) return num;
        }
        return -1;
    }
};


*/