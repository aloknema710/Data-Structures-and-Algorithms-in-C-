#include<bits/stdc++.h>
using namespace std;
int countnobrute(int arr[],int k,int n){    // O(n^2)
    int count = 0;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += arr[j];
        
        if(sum == k){
            count++;
            }
        }
    }
    return count;
}
int countnoopt(int arr[],int k,int n){      // O(n logn) & O(N)
    unordered_map<int,int> mpp;
    int preSum = 0, cnt = 0;

    mpp[0] = 1; // Setting 0 in the map.
    for (int i = 0; i < n; i++) {
        // add current element to prefix Sum:
        preSum += arr[i];

        // Calculate x-k:
        int remove = preSum - k;                

        // Add the number of subarrays to be removed:
        cnt = cnt + mpp[remove];                                // mpp[remove] tells us how many subarrays are ending at this point
        // Add the number of subarrays ending at current point:    if presum - k (remove) does not exist in map,it not increment cnt.  
                                                                
        // Update the count of prefix sum
        // in the map.                                          // every presum with arr[i] adds in mpp with it's value as 1.
        mpp[preSum] += 1;
    }
    return cnt;
}
int main(){
    int arr[]={1,2,3,-3,1,1,1,4,2,-3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    cout<<countnobrute(arr,k,n)<<endl;
    cout<<countnoopt(arr,k,n);
}