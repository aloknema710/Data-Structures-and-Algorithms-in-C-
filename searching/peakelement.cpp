// arr[i-1] < arr[i] >arr[i+1].
#include<bits/stdc++.h>
using namespace std;
int brutefindpeak(vector<int>& arr){
    int n = arr.size();
    for (int i = 0; i < n; i++){
        if ((i==0 || arr[i-1] < arr[i] ) && (i==n-1 || arr[i] > arr[i+1] )){
            return i;
        }
    }
    return -1;
} 
int optbrute(vector<int>& arr){       //log2 n
    int n = arr.size();
    int low = 0, high = n-1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if ((mid == 0 || arr[mid-1] < arr[mid] ) && (mid == n-1 || arr[mid] > arr[mid+1] )){       // u can also write different case for 
            return mid;                                                                            // mid = 0 or n-1         
            }
        else if (arr[mid] < arr[mid-1]) {
            high = mid - 1;
            }
        else {
            low = mid + 1;    // case is for probs. like [1,5,1,2,1].
        }
    }
    return -1;
}
int main(){
    vector<int>arr = {1,2,3,4,5,6,7,8,5,1};
    cout<<brutefindpeak(arr)<<endl;
    cout<<optbrute(arr);
}

/* Mostes optimal
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n - 1;
        
        while (low < high) {
            int mid = low + (high - low) / 2;
            
            if (nums[mid] > nums[mid + 1]) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        
        return low;
    }
};
*/