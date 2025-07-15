#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& arr, int l, int mid, int r) {
        vector<int> temp;
        int left = l;
        int right = mid + 1;

        // Merge the two sorted halves into temp
        while (left <= mid && right <= r) {
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            } else {
                temp.push_back(arr[right]);
                right++;
            }
        }

        // Copy any remaining elements from the left half
        while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }

        // Copy any remaining elements from the right half
        while (right <= r) {
            temp.push_back(arr[right]);
            right++;
        }

        // Copy the sorted elements back into the original array
        for (int i = l; i <= r; i++) {
            arr[i] = temp[i - l];
        }
    }

    void mergeSort(vector<int>& arr, int l, int r) {
        // Base condition: when the range has 1 or no elements
        if (l >= r) return;

        int mid = (l + r) / 2;
        mergeSort(arr, l, mid);       // Sort the left half
        mergeSort(arr, mid + 1, r);  // Sort the right half
        merge(arr, l, mid, r);       // Merge the sorted halves
    }
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for (int i = 0; i < n; i++){
        int element;
        cin >> element;
        arr.push_back(element);
    }
    mergeSort(arr,0,n-1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}