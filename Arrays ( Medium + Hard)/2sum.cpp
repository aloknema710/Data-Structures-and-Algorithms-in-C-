#include<bits/stdc++.h>
using namespace std;
string opttwosum(vector <int> a,int n,int target){
    int i = 0,j = n-1;
    sort(a.begin(),a.end());
    while(i<j){
        int sum = a[i]+a[j];
        if(sum==target){
            return "YES";
        }
        else if(sum<target){
            i++;
        }
        else{
            j--;
        }
    }
    return "NO";
}
int main(){
    vector <int> a ;
    int n,target;
    cin >> n ;
    for(int i = 0 ; i < n ; i ++ ){
        int x ;
        cin >> x ;
        a.push_back(x) ;
    }
    cout<<"target value";
    cin>>target;
    cout<<opttwosum(a,n,target);
}

/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int , int>mpp;
        for(int i = 0;i < nums.size();i++){
            int rem = target - nums[i];
            if(mpp.find(rem)!=mpp.end()){
                return{mpp[rem],i};
            } 
            mpp[nums[i]]=i;
        }
        return{-1,-1};
    }
};
*/

//Mostest Optimal sol@
/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       // Step 1: Store value and original index
    vector<pair<int, int>> v; // {value, index}
    for (int i = 0; i < nums.size(); i++) {
        v.push_back({nums[i], i});
    }

    // Step 2: Sort the vector by values
    sort(v.begin(), v.end());

    // Step 3: Apply two-pointer approach
    int left = 0, right = v.size() - 1;
    while (left < right) {
        int sum = v[left].first + v[right].first;
        if (sum == target) {
            return {v[left].second, v[right].second};
        } else if (sum < target) {
            left++;
        } else {
            right--;
        }
    }

    // Step 4: If not found
    return {-1, -1}; // Or throw an error depending on context
    }
};
*/
