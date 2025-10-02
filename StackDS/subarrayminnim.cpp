// in this problem we have to find the minimum element in all the subarrays of size k
// very logical approach is to find the minimum element in every subarray of size k

#include<bits/stdc++.h>
using namespace std;

class Solution {

private:
    int mod = 1e9 + 7;
    vector<int> nextSmallerElement(vector<int>& arr){
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i = n-1; i >= 0; i--){
            while(!st.empty() && arr[st.top()] >= arr[i]) st.pop();
            if(st.empty()) ans[i] = n;
            else ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    vector<int> prevSmallerElement(vector<int>& arr){
        int n = arr.size();
        vector<int> ans(n);
        stack<int> st;
        for(int i = 0; i < n; i++){
            while(!st.empty() && arr[st.top()] > arr[i]) st.pop();
            if(st.empty()) ans[i] = -1;
            else ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }

public:
    // int sumSubarrayMins(vector<int>& arr) {
    //     int sum = 0;
    //     int mod = 1e9 + 7;
 
    //     for(int i = 0;i < arr.size();i++){
    //         int minim = arr[i];
    //         for(int j = i;j <arr.size();j++){
    //             minim = min(minim, arr[j]);
    //             sum = (sum + minim)%mod;
    //         }
    //     }
    //     return sum;
    // }

    int sumSubarrayMins(vector<int>& arr){
        int n = arr.size();
        vector<int> next(n);
        vector<int> prev(n);
        next = nextSmallerElement(arr);
        prev = prevSmallerElement(arr);
        long long sum = 0;
        for(int i = 0; i < n; i++){
            long long left = i - prev[i];
            long long right = next[i] - i;
            sum = (sum + (arr[i] * left * right)%mod)%mod;
        }
        return (int)sum;
    }
};

int main(){
    vector<int> arr = {3,1,2,4};
    Solution obj;
    cout << obj.sumSubarrayMins(arr) << endl;
}


/*
class Solution {
public:
    vector<int> findNse(vector<int>& arr){
        int n = arr.size();
        stack<int> st;
        vector<int> res(n);
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && arr[st.top()] > arr[i]){
                st.pop();
            }
            res[i] = st.empty() ? n : st.top();   // ✅ boundary = n
            st.push(i);
        }
        return res;
    }

    vector<int> findPse(vector<int>& arr){
        int n = arr.size();
        stack<int> st;
        vector<int> res(n);
        for(int i=0;i<n;i++){    // ✅ fix loop
            while(!st.empty() && arr[st.top()] >= arr[i]){  // ✅ use >= for stability
                st.pop();
            }
            res[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
        return res;
    }

    int sumSubarrayMins(vector<int>& arr) {
        vector<int> nse = findNse(arr);
        vector<int> pse = findPse(arr);
        int n = arr.size();
        long long total = 0;     // ✅ long long
        int mod = 1e9 + 7;

        for(int i=0;i<n;i++){   // ✅ include all elements
            long long left = i - pse[i];
            long long right = nse[i] - i;
            total = (total + left * right % mod * arr[i]) % mod;
        }
        return (int)total;
    }
*/