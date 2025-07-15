#include<bits/stdc++.h>
using namespace std;
int firstoccurence(int arr[],int n,int x){
    int low = 0,high =n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if (arr[mid]>x){
            high = mid-1;
        }
        else if(arr[mid]<x){
            low = mid +1;
        }
        else{
            if (mid==0 || arr[mid-1]!=arr[mid]){
                return mid;
            }
            else {high = mid-1;}
        }
    }
    return -1;
}
int lastoccurence(int arr[],int n,int x){
    int low = 0,high =n-1;
    while(low<=high){
        int mid = (low+high)/2;
        if (arr[mid]>x){
            high = mid-1;
        }
        else if(arr[mid]<x){
            low = mid +1;
        }
        else{
            if (mid==0 || arr[mid+1]!=arr[mid]){
                return mid;
            }
            else {low = mid+1;}
        }
    }
    return -1;
}
int countoccurence(int arr[],int n,int x){
    int last = lastoccurence(arr,n,x);
    int first = firstoccurence(arr,n,x);
    if (last==-1 || first==-1){
        return 0;
        }
        return last-first+1;

}
int main(){
    int arr[] = {5,10,10,20,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x; 
    cin>>x;
    cout<<countoccurence(arr,n,x);
}