#include<bits/stdc++.h>
using namespace std;
void printsubarray(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}
int sumsubarray(int arr[], int n) {
    int maxsum = INT_MIN;
    for(int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;
            for (int k = i; k <= j; k++) {  // Correct loop condition
                sum = sum + arr[k];
            }
            maxsum = max(maxsum, sum);  // Update maxsum
        }
    }
    return maxsum;  // Return the maximum sum
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Maximum sum of subarray: " << sumsubarray(arr, n) << endl;  // Output the result
    return 0;
}
