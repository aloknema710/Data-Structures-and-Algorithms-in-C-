#include<bits/stdc++.h>
using namespace std;
int single(int arr[],int n){
    if(n==1) return arr[0];
    if(arr[0]!=arr[1]) return arr[0];
    if(arr[n-1]!=arr[n-2]) return arr[n-1];
    int low = 1, high = n-2;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==arr[mid-1] && arr[mid]==arr[mid+1]) return mid;

        // condition surely states we r surely standing on left part of single element
        if((mid%2==1 && arr[mid-1]==arr[mid]) || (mid%2==0 && arr[mid]==arr[mid+1])) low = mid+1; 
        
        else high = mid-1;  // right part
    }
    return -1;
}
int main(){
    int arr[] = {1,1,2,2,3,3,4,5,5,5,6,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<single(arr,n);
}