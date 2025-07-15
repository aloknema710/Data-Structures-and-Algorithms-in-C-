#include <bits/stdc++.h>
using namespace std;
void bubblesort(int arr[], int n) {
    for (int i = n - 1; i > 0; i--) {
        int didSwap = 0;  // Flag to detect if a swap was made
        for (int j = 0; j < i; j++) {  // Fix the loop condition to avoid out-of-bounds access
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);        // first element 
                didSwap = 1;
            }
        }
        if (didSwap == 0) {
            break;  // Best case: the array is already sorted
        }
        cout<<"runs\n";
    }
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);  // Using vector instead of VLA
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Bubble sort
    bubblesort(arr.data(), n);  // Pass array data pointer to the function

    // Print sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}

