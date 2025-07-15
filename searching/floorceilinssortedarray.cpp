#include<bits/stdc++.h>
using namespace std;
int floorvalue(int arr[],int x,int n){
    int low = 0, high = n-1, ans = -1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid] >= x){
            ans = mid;
            high = mid-1;
            }
            else low = mid+1;
            }
            return ans;
}
int main(){
    int arr[] = {1, 2, 3, 4, 5,
        6, 7, 8, 9, 10};
        int n = sizeof(arr)/sizeof(arr[0]);
        int x = 5;
        cout << "Floor of " << x << " is " << floorvalue(arr,x,n);
    }
