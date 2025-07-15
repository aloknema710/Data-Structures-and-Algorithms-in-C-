#include <bits/stdc++.h>
using namespace std;
void func(int index, int k, vector<int>& arr, vector<vector<int>>& ans, vector<int>& ds) {
    if (k == 0) {
        ans.push_back(ds);
        return;
    }
    for (int i = index; i < arr.size(); i++) {               // ds will all become empty for every iteration wen index increments
        if (i > index && arr[i] == arr[i - 1]) continue; // Skip duplicates
        if (arr[i] > k) break; // Optimization: stop if the current number is greater than k
        ds.push_back(arr[i]); // Include the current element in the subset
        func(i + 1, k - arr[i], arr, ans, ds); // Recur for the next index and reduce k
        ds.pop_back(); // Backtrack
    }
}
int main() {
    vector<int> arr;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int k;
    cout << "Enter the candidate sum (k): ";
    cin >> k;
    sort(arr.begin(), arr.end()); // Sort to handle duplicates properly
    vector<vector<int>> ans; // To store all subsets that sum to k
    vector<int> ds; // Temporary vector to store the current subset
    func(0, k, arr, ans, ds);
    // Print the subsets
    cout << "Subsets that sum to " << k << ":\n";
    for (auto& subset : ans) {
        cout << "[ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]\n";
    }
    return 0;
}
// Conclusion:
// First code (Combination Sum) is designed to find combinations where elements can be reused, and it prints the result as it finds each combination.
// Second code (Combination Sum II) is designed to find unique combinations, ensuring no duplicates are present in the result and also optimizing the search by stopping early if the current number exceeds the target sum. It stores all valid combinations and prints them at the end.
// Both solve the same basic problem, but with different constraints and optimizations.
// Combination Sum II uses for loop which use single recursive function at each step
