#include<bits/stdc++.h>
using namespace std;

bool checksort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {  // Fix the comparison
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (checksort(arr, n)) {
        cout << "Array is sorted" << endl;
    } else {
        cout << "Array is not sorted" << endl;
    }

    return 0;
}


// leetcode sol@ can handle even rotated arrays
/*
class Solution {
public:
    bool check(vector<int>& nums) {
          int n = nums.size();
        int count = 0;                           //modulo operation (i + 1) % n ensures that when i is the last index of the array (i = n - 1),
                                                                
        for (int i = 0; i < n; ++i) {             //the "next" element wraps around to the first element of the array (nums[0]) 
            if (nums[i] > nums[(i + 1) % n]) {    //This is crucial for detecting the rotation point in the array
                count++;                          // Count represents points where the order decreases 
            }                                    //This violates the condition for a rotated sorted array 
        }                                  IMP ->   //(which can have at most one such point), so the function returns false. 
        return count <= 1;         
    }
};
*/