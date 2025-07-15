#include<bits/stdc++.h>
using namespace std;
bool combsum(int index, vector<int>& arr, vector<int>& v, int n, int k) {
    if (k == 0) {
        for (int i = 0; i < v.size(); i++) {
            cout << v[i] << " ";
        }
        cout << endl;
        return true;
    }
    if (index == n) {
        return false;
    }
    bool found = false; //found is used to keep track of whether a valid combination has been found during the recursive calls.
    // Include the current element arr[index] in the combination
    if (arr[index] <= k) {
        v.push_back(arr[index]);
        found |= combsum(index, arr, v, n, k - arr[index]); // Reuse elements
        v.pop_back();
    }
    // Do not include the current element, move to the next element
    found |= combsum(index + 1, arr, v, n, k);      // bitwise or assignment operator
//                                                   If combsum(index + 1, arr, v, n, k) returns true, found will become true.
//                                                   If it returns false, found will stay false.    
   
/*
Example:
Suppose found = false initially.

combsum(index + 1, arr, v, n, k) returns true (meaning a valid combination was found).

After the |=, found will become true.

Suppose found = false initially.

combsum(index + 1, arr, v, n, k) returns false (meaning no valid combination was found).

After the |=, found will stay false.

So, the purpose of this line is to update the value of found to true if any recursive call to combsum finds a valid combination.
*/ 
    return found;
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> v;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    if (!combsum(0, arr, v, n, k)) {       // ! is used here so that only first statement runs
        cout << "No combination found" << endl;
    }
return 0;
}