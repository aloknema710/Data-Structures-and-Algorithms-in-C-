#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numSubarraysWithSum(vector<int>& arr, int goal) {
        return atMost(arr, goal) - atMost(arr, goal - 1);
    }

private:
    int atMost(vector<int>& arr, int goal) {     // we are counting all the counts of subs.. with
        if (goal < 0) return 0;                   // sum <= goal
        int left = 0, right = 0, sum = 0, count = 0;
        while (right < arr.size()) {
            sum += arr[right];
            while (sum > goal) {
                sum -= arr[left];
                left++;
            }
            count += right - left + 1;
            right++;
        }
        return count;
    }
};

int main() {
    // Step 1: Create an instance of Solution
    Solution solution;

    // Step 2: Define input
    vector<int> arr = {1, 0, 1, 0, 1};
    int goal = 2;

    // Step 3: Call the method using the object
    int result = solution.numSubarraysWithSum(arr, goal);

    // Step 4: Print the result
    cout << result << endl;

    return 0; // Step 5: End main with return 0
}