// U can also flip zeroes and ones in the array to maximize the number of consecutive 1s.
#include<bits/stdc++.h>
using namespace std;

int func(vector<int> arr, int k){
    int left = 0, right = 0;
    int zeroCount = 0; // Count of zeroes in the current window
    int maxLength = 0; // Maximum length of consecutive 1s found

    while (right < arr.size()) {
        // If we encounter a zero, increment the zero count
        if (arr[right] == 0) {
            zeroCount++;
        }

        // If the count of zeroes exceeds k, move the left pointer to reduce the window size
        while (zeroCount > k) {
            if (arr[left] == 0) {              // this while loop will iterate until we have at most k zeroes in the window
                zeroCount--;                  // If the leftmost element is a zero, decrement the zero count
            }                                   // If zeroCount exceeds k, we move the left pointer
            left++;                             // rightwards until we have at most k zeros in the window.
        }

        // Update the maximum length of consecutive 1s found so far
        maxLength = max(maxLength, right - left + 1);
        
        // Move the right pointer to expand the window
        right++;
    }

    return maxLength;
}

int main(){
    vector<int> arr = {1,1,1,0,0,0,1,1,1,1,0};
    int k = 2; // Number of zeroes we can flip
    cout<<func(arr, k);
}