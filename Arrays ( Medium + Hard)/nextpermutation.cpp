#include <bits/stdc++.h>
using namespace std;
int nextpermutation(int arr[], int n) {
    int index = -1;
    // Find the rightmost index such that arr[i] < arr[i + 1]
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] < arr[i + 1]) {
            index = i;
            break;
        }
    }
    // If no such index exists, return 0 (no next permutation)
    if (index == -1) return 0;
    // Find the smallest number greater than arr[index] from the right side
    for (int i = n - 1; i > index; i--) {
        if (arr[i] > arr[index]) {
            swap(arr[i], arr[index]);
            break;
        }
    }
    // Reverse the elements after the index 
    int left = index + 1, right = n - 1;
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    return 1;
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int arr[] = {2, 1, 5, 4, 3, 0, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Print the current permutation
    cout << "Current permutation: ";
    printArray(arr, n);
    if (nextpermutation(arr, n)) {
        cout << "Next permutation: ";
        printArray(arr, n);
    } else {
        cout << "No next permutation" << endl;
    }
    return 0;
}
