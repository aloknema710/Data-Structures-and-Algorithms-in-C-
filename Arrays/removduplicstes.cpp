#include<bits/stdc++.h>
using namespace std;

int removeduplicates(int arr[], int n) {
    int j = 0;
    for (int i = 1; i < n; i++) {
        if (arr[j] != arr[i]) {
            arr[j + 1] = arr[i];
            j++;
        }
    }
    return j + 1;
}

int main() {
    int arr[] = {1, 1, 2, 2, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int newSize = removeduplicates(arr, n); // Call function and get the new size
    cout << "Array after removing duplicates: ";
    
    // Print the modified array
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
int i = 0;
        for (int j = 1; j < nums.size(); ++j) {
            if (nums[j] != nums[i]) {
                ++i;
                nums[i] = nums[j];
            }
        }
        return i + 1;
*/