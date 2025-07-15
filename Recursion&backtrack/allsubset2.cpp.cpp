#include<bits/stdc++.h>
using namespace std;

void printsubset(int ind, vector<int>& arr, vector<int>& ds, vector<vector<int>>& ans) {
    ans.push_back(ds); // Add the current subset to the answer
    for (int i = ind; i < arr.size(); i++) {
        // Skip duplicates to avoid duplicate subsets
        if (i != ind && arr[i] == arr[i - 1]) continue;
        ds.push_back(arr[i]); // Include the current element in the subset
        printsubset(i + 1, arr, ds, ans); // Recur for the next index
        ds.pop_back(); // Backtrack: remove the current element
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end()); // Sort to handle duplicates

    vector<int> ds; // Temporary vector to store the current subset
    vector<vector<int>> ans; // To store all subsets
    printsubset(0, arr, ds, ans);

    // Print all subsets
    cout << "All subsets are:\n";
    for (const auto& subset : ans) {
        cout << "[";
        for (int j = 0; j < subset.size(); j++) {
            cout << subset[j];
            if (j < subset.size() - 1) cout << ", ";
        }
        cout << "]\n";
    }

    return 0;
}