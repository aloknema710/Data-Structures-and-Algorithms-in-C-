#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[low];  // Choose the first element as pivot
    int i = low + 1;       // Start i from the next element
    int j = high;          // j starts from the last element
    
    while (i <= j) {
        // Increment i until we find an element greater than or equal to the pivot
        while (i <= high && arr[i] <= pivot) {
            i++;
        }
        
        // Decrement j until we find an element less than or equal to the pivot
        while (arr[j] > pivot) {
            j--;
        }
        
        // If i and j have not crossed, swap the elements at i and j
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    }

    // Finally, place the pivot element in its correct position
    swap(arr[low], arr[j]);
    return j;  // Return the partition index
}

void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int partINDEX = partition(arr, low, high);  // Find partition index
        
        quicksort(arr, low, partINDEX - 1);  // Recursively sort the left part
        quicksort(arr, partINDEX + 1, high); // Recursively sort the right part
    }
}

int main() {
    int n;
    cin >> n;  // Input the size of the array
    int arr[n];  // Create the array with n elements
    
    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    // Call the quicksort function
    quicksort(arr, 0, n - 1);
    
    // Output the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
