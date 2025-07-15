#include<bits/stdc++.h>
using namespace std;

void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min_index = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;                 //or we can write -> swap(arr[j],arr[min_index]); in place of this
                }
                }
        swap(arr[i],arr[min_index]);           //leaving it as blank.
        }
}


int main(){
    int n;
 
    cin>>n;
       int arr[n];
    for (int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    selectionsort(arr,n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
}