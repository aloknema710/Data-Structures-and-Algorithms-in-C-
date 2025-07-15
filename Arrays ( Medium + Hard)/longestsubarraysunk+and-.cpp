#include<bits/stdc++.h>
using namespace std;
int longestSubarray(vector<int>& arr, int k) {
        map<long long, int> presummap; // Map to store prefix sums and their indices
        long long sum = 0;            // Running sum
        int maxlen = 0;               // Maximum length of subarray
        
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i]; // Update running sum

            // Case 1: If the current sum itself equals `k`
            if (sum == k) {
                maxlen = max(maxlen, i + 1);
            }

            // Case 2: Check if (sum - k) exists in the map
            long long rem = sum - k;
            if (presummap.find(rem) != presummap.end()) {
                int len = i - presummap[rem]; // Length of subarray
                maxlen = max(maxlen, len);
            }

            // Case 3: Add the current sum to the map if it doesn't already exist
            if (presummap.find(sum) == presummap.end()) {
                presummap[sum] = i;
            }
        }

        return maxlen;    
    }
int main(){
    vector<int> arr;
    int n; 
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
        }
    int k;
    cin>>k;
        cout<<longestSubarray(arr,k)<<endl;
        return 0;
}