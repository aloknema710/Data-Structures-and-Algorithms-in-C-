#include<bits/stdc++.h>
using namespace std;
int lowerbound(int arr[],int x,int n){        // lb=lower_bound(arr.begin(),arr.end(),x) - arr.begin(); shortcut
    int l = 0, h = n - 1, mid, ans = -1;
    while (l <= h) {
        mid = (l + h) / 2;
        if (arr[mid] >= x) {
            ans = mid;
            h = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    return ans;
}
int main(){
    int arr [10] = {1,2,3,3,5,8,8,10,10,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 9;
    cout<<lowerbound(arr,x,n);
    return 0;
}