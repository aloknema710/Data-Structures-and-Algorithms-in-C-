#include<bits/stdc++.h>
using namespace std;
// brute force approach
int search(vector<int> arr,int n){
    int low = 0, high = n-1, element = INT_MAX;
    while(low <= high){
    int mid = (low + high)/2 ;
        if (arr[low]<=arr[mid]){
        element = min(element,arr[low]);
        low = mid+1 ;
        }
        else{
        element = min(element,arr[mid]);
        high = mid-1 ;
        }
    }
    return element;
}

int main(){
    vector<int> arr = {4,5,6,7,0,1,2};
    int n = arr.size();
    cout<<search(arr,n);//left indexing
}