#include<bits/stdc++.h>
using namespace std;    

int func(vector<int> &arr, int k){
    int lsum = 0, rsum = 0;
    int maxpointsum = 0;
    // Calculate the sum of the first k elements from the front 
    for(int i = 0; i < k; i++){
        lsum += arr[i];
        maxpointsum = lsum; // Initialize maxsum with the left sum
    }

    while(k > 0){
        // Calculate the sum of the last k elements from the back
        rsum = 0;
        for(int i = 0; i < k; i++){
            rsum += arr[arr.size() - 1 - i];
            break; // Break after the first iteration to avoid multiple calculations
        }
        
        // Update maxpointsum with the maximum of left sum and right sum
        maxpointsum = max(maxpointsum, lsum + rsum);
        
        // Decrease k to consider one less card from the front and one more from the back
        k--;
        
        // Update left sum by removing the last element of the current left sum
        lsum -= arr[k];
    }
    

    return maxpointsum; // If k is equal to the size of the array, return the left sum
}
int main(){
    vector<int> arr = {6,2,3,4,7,2,1,7,1};
    int k = 4;   // no of cards you can pick from front and back
    func(arr,k);
}