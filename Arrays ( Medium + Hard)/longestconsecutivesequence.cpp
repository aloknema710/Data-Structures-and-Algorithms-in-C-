#include<bits/stdc++.h>
using namespace std;
// Helper function to check if a number exists in the array (used in brute-force)
bool ls(int arr[], int n, int num) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            return true;
        }
    }
    return false;
}
// Brute force solution to find the longest consecutive subsequence
int brutesol(int arr[], int n) {
    int longest = 0;  // to store the length of the longest subsequence
    int x, count;
    // Iterate through all elements of the array
    for (int i = 0; i < n; i++) {
        x = arr[i];     // start of the subsequence
        count = 1;      // we have at least one element in the subsequence
        // Find the longest subsequence starting with arr[i]
        while (ls(arr, n, x + 1)) {
            x = x + 1;  // increment to the next consecutive number
            count++;    // increase the count of the subsequence
        }
        // Update the longest subsequence if the current one is longer
        longest = max(longest, count);
    }
    return longest;
}
// 
int bettersol(int arr[],int n){
    if(n==0) return 0;
    sort(arr,arr+n);
    int longest = 1, lastsmall =INT_MIN, cntcurr =0;      

    for (int i = 0; i < n; i++){
        if (arr[i]-1 == lastsmall){                  // after 1 arr[3]=2 lastsmall needs to be 1(i.e arr[3]-1 = 2)
//                                                     for tracking weather arr[i] and arr[i-1] are consecutive element or not.
            cntcurr++;
            lastsmall = arr[i];
        }
        else if(arr[i]!=lastsmall){
            cntcurr=1;
            lastsmall = arr[i];
        }
        longest = max(longest,cntcurr);
    }
    return longest;
//     Time Complexity: O(NlogN) + O(N), N = size of the given array.
// Reason: O(NlogN) for sorting the array. To find the longest sequence, we are using a loop that results in O(N).

// Space Complexity: O(1), as we are not using any extra space to solve this problem.
}
int optsol(int arr[],int n){
    if(n==0) return 0;
    unordered_set<int> s(arr,arr+n);
    int longest = 0;
    for (int i = 0; i < n; i++){
        s.insert(arr[i]);
    }
    for(auto it : s){
        if (s.find(it-1)==s.end()){
            int cnt = 1;
            int x = it;
            while (s.find(x+1)!=s.end()){
                x = x + 1;
                cnt++;
                }
            longest = max(longest, cnt);
        }
        
    }
        return longest;
}
int main() {
    int arr[] = {102, 4, 100, 1, 101, 3, 2, 1, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Call brute force function to find the longest consecutive subsequence
    cout << "Length of longest consecutive subsequence: " << brutesol(arr, n) << endl;
    cout << "Length of longest consecutive subsequence: " << bettersol(arr, n) << endl;
    cout << "Length of longest consecutive subsequence: " << optsol(arr, n) << endl;

    return 0;
}
