#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        backtrack(candidates, target, 0, ds, ans);
        return ans;
    }
private:
    void backtrack(vector<int>& candidates, int target, int start,
     vector<int>& ds, vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(ds);
            return;
        }
        
        if (target < 0) {
            return;
        }

        for(int i = start; i < candidates.size(); i++){
            ds.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], i, ds, ans);
            ds.pop_back();
        }
    }
};

int main(){
    
}


/*
class Solution {
public:
    vector<vector<int>> res;

    void backtrack(vector<int>& candidates, int target, int idx, vector<int>& curr) {
        // Base case: found a valid combination
        if (target == 0) {
            res.push_back(curr);
            return;
        }

        // If target goes negative or no more candidates left
        if (target < 0 || idx >= candidates.size()) return;

        // 1. Include current candidate (unlimited usage)
        curr.push_back(candidates[idx]);
        backtrack(candidates, target - candidates[idx], idx, curr);
        curr.pop_back();  // backtrack

        // 2. Skip current candidate (move to next)
        backtrack(candidates, target, idx + 1, curr);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> curr;
        backtrack(candidates, target, 0, curr);
        return res;
    }
};
*/