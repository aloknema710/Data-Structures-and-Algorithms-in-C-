#include<bits/stdc++.h>
using namespace std;
int search( vector<int> arr,int n,int k){
    int low = 0, high = n - 1;
    while(low <= high){
        int mid = (high + low) / 2;
        // Here we are checking the condition for mid element
        if(arr[mid] == k) return mid;
        //new condition added
        if (arr[mid]==arr[low] && arr[mid]==arr[high]){
            low = low +1;
            high = high -1;
            continue;
        }
        if(arr[low] < arr[mid]){
            if (arr[low]<=k && k<=arr[mid]){
                high = mid - 1;
                }
            else{
                low = mid + 1;
            }
        } 
        else{
            if (arr[mid] <= k && k <= arr[high]){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }    
        }                                        // here t.c of worst case is O(n/2) and average scenario O(log2 n).
        return -1;
}
int main(){
    vector<int> arr = {7,8,1,2,3,3,3,4,5,6};  // without duplicates
    int n = arr.size();
    int k = 3;
    // In binary search we were only checking 1 half of the array,
    // but here there might be acondition which requires traversal of first half of array
    int result = search(arr,n,k);
    if(result != -1) cout<<"Element is present at index "<<result;
    else cout<<"Element is not present in array.";
    return 0;
}