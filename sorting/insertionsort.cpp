#include <iostream>
using namespace std;
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {  // Start from the second element
        int key = arr[i];  // The current element to be inserted
        int j = i - 1;  // Start comparing with the element before the current element
        // Shift elements of arr[0..i-1], that are greater than key, to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];  // Shift the element to the right
            j--;  // Move to the previous element
            }
        arr[j + 1] = key;  // Insert the current element into the correct position
        // Print array after each pass for demonstration
        cout << "Iteration " << i << ": ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }    
    cout << "Sorting the array using Insertion Sort:" << endl;
    insertionSort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
