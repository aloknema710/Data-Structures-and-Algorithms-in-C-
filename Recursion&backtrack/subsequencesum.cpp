#include <bits/stdc++.h>
using namespace std;

void sum(int index, vector<int> &ds, int s, int k, int arr[], int n) {
    // Base case: if we have considered all elements
    if (index == n) {
        if (s == k) {  // Check if the sum is equal to k
            for (int num : ds) {  // Print the current subset
                cout << num << " ";
            }
            cout << endl;
        }
        return;
    }

    // Include the current element in the subset
    ds.push_back(arr[index]);
    sum(index + 1, ds, s + arr[index], k, arr, n);

    // Exclude the current element from the subset
    ds.pop_back();
    sum(index + 1, ds, s, k, arr, n);
}

int main() {
    int arr[] = {1, 2, 1};  // Sample array
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;  // Target sum
    vector<int> ds;  // Temporary vector to store subsets
    sum(0, ds, 0, k, arr, n);  // Start recursion
    return 0;
}
