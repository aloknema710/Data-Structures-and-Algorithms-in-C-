#include<bits/stdc++.h>
using namespace std;
// void countFreq(int arr[],int n){
//     vector<bool> visited(n+1,0);    // false   
//     for(int i=0;i<n;i++){
//         // Skip this element if already processed
//         if (visited[i] == true) continue;
//         // Count frequency
//         int count = 1;
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 count++;
//                 visited[j] = true;
//             }
//         }
//         cout << arr[i] << " " << count << endl;
//     }
// }

// void countFreq(int arr[],int n){  // using map
//     map<int , int> mpp;
//     for(int i=0;i<n;i++){
//         mpp[arr[i]]++;
//     }
//     for(auto it : mpp){
//         cout << it.first << " " << it.second << endl;
//     }
// }

//array should be sorted in this case
void countFreq(int arr[],int n){
    int freq = 1, i = 1;
    sort(arr,arr+n);
    while(i < n){
        while (i < n && arr[i] == arr[i-1]){
            freq++;
            i++;
        }
        cout << arr[i-1] << " " << freq << endl;
        freq = 1;
        i++;
    }
    if(n == 1 || arr[n - 1] != arr[n - 2]){
        cout << arr[n - 1] << " " << 1 << endl;
    }
}

int main(){
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}