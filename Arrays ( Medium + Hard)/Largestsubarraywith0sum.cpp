#include<bits/stdc++.h>
using namespace std;
int subarraysum0(vector<int> &arr){
    map<int, int> mpp;
    int sum = 0;
    int longest = 0;
    for (int i = 0; i < arr.size(); i++){
        sum += arr[i];
        if (sum == 0){
            longest = max(longest, i + 1);
        }
        if (mpp.find(sum) != mpp.end()){
            longest = max(longest, i - mpp[sum]);     // index - (occurence of sum at i generated in previous index)
        }
        else{
            mpp[sum] = i;                          // if we do not find any previous sum = sum upto current index 
        }                                          //   then we update mpp with current sum and index value.
    }
    return longest;
}
int main(){
    vector <int> arr = {15,-2,2,-8,1,7,10,23};
    cout << subarraysum0(arr);
    return 0;
}