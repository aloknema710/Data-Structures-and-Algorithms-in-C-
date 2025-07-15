#include<bits/stdc++.h>
using namespace std;

int maximum(vector<int> arr){
    int max = INT_MIN;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

// int smallestDivisor(vector<int> arr, int limit){
//     for(int i = 1; i <= maximum(arr); i++){
//         int sum = 0;
//             for(int j = 0; j < arr.size()-1; j++){
//                 sum = sum + arr[j];
//                 sum = ceil((double)(sum)/(double)(i));
//                 // sum = ceil((double)(arr[j])/i);
//             }
//         if(sum <= limit){
//             return i;
//         }
//     }
//     return -1;
// }

int sumByD(vector<int> &arr, int div) {
    int n = arr.size(); //size of array
    //Find the summation of division values:
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += ceil((double)(arr[i]) / (double)(div));
    }
    return sum;
}

int smallestDivisor(vector<int>& arr, int limit) {
    int n = arr.size();
    if (n > limit) return -1;
    int low = 1, high = *max_element(arr.begin(), arr.end());

    //Apply binary search:
    while (low <= high) {
        int mid = (low + high) / 2;
        if (sumByD(arr, mid) <= limit) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return low;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    int limit = 8;
    int ans = smallestDivisor(arr, limit);
    cout << "The minimum divisor is: " << ans << "\n";
    return 0;
}