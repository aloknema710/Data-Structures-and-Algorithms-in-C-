#include<bits/stdc++.h>
using namespace std;
int maxproduct(int arr[],int n){
    int prefix = 1;
    int suffix = 1;
    int res = INT_MIN;
    for (int i = 0; i < n; i++){
        if(prefix == 0) prefix = 1;
        if(suffix == 0) suffix = 1;

        prefix = prefix*arr[i];
        suffix = suffix*arr[n-i-1];
        res = max(res,max(prefix,suffix));
    }
    return res;
}
int main(){
    int arr[] = {3,2,-1,4-6,3,-2,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxproduct(arr,n);
}