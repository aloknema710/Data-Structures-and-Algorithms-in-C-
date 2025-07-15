#include <bits/stdc++.h>
using namespace std;

void subsum(int index, int sum, int arr[], vector<int>& ans, int n) {
    if (index == n) {
        ans.push_back(sum); // Store the subset sum
        return;
    }
    
    // Include the current element in the sum
    subsum(index + 1, sum + arr[index], arr, ans, n);
    
    // Exclude the current element from the sum
    subsum(index + 1, sum, arr, ans, n);
}

int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> ans;
    subsum(0, 0, arr, ans, n);

    sort(ans.begin(), ans.end()); // Optional: Sort the sums for better readability

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}
