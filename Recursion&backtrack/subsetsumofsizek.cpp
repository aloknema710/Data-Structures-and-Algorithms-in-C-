#include<bits/stdc++.h>
using namespace std;
void func(int index, int k, vector<int>& arr, vector<vector<int>>& ans, vector<int>& ds) {
    if (k == 0) {
        ans.push_back(ds); // Add the current subset to the answer
        return;
    }
    for (int i = index; i < arr.size(); i++) {
        ds.push_back(arr[i]); // Include the current element in the subset
        func(i + 1, k - 1, arr, ans, ds); // Recur for the next index and reduce k
        ds.pop_back(); // Backtrack: remove the current element
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
    cout << "Enter the size of subsets (k): ";
    cin >> k;
    vector<vector<int>> ans; // To store all subsets of size k
    vector<int> ds; // Temporary vector to store the current subset
    func(0, k, arr, ans, ds);
// Print all subsets of size k
    cout << "Subsets of size " << k << " are:\n";
    for (const auto& subset : ans) {
        for (int num : subset) {
            cout << num << " ";
        }
        cout << endl;
    }
return 0;
}