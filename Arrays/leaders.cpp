#include<bits/stdc++.h>
using namespace std;
int bruteleader(int arr[],int n){
    for (int i = 0; i < n; i++){
        bool leader = true;
        for (int j = i+1; j < n; j++){
            if (arr[j] > arr[i]){
                leader = false;
                break;
            }
        }
         if (leader == true){
            return arr[i];              // u can even create another array to store solution      
        }
    }
    return -1;
}
void optleader(int arr[],int n,vector<int> &ans){
    // int max = arr[0];
    // int leader = arr[0];
    // for (int i = 1; i < n; i++){
    //     if (arr[i] > max){
    //         max = arr[i];
    //         leader = arr[i];
    //         }
    //         }
    //         return leader;
    //}
    int maxi = INT_MIN;
    for (int i = n-1;i >= 0;i--){
        if (arr[i] > maxi){
            ans.push_back(arr[i]);
        }
        maxi = max(maxi,arr[i]);
    }
}
int main(){
    int n = 6;
    int arr[n] = {10,22,12,3,0,6};
    vector<int> ans;
    cout<<bruteleader(arr,n)<<endl;

    optleader(arr, n, ans);// you can even reverse it

    for (auto it : ans){
        cout<<it<<" ";
    }
    return 0;
}