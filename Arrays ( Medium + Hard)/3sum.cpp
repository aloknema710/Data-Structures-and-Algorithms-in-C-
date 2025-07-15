#include<bits/stdc++.h>
using namespace std;

// vector<vector<int>> triplet(int n,vector<int>arr){
//     vector<vector<int>> ans;
//     set<vector<int>> st;         // for uniqueness
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             for(int k=j+1;k<n;k++){
//                 if(arr[i] + arr[j] + arr[k] == 0){
//                     vector<int> temp = {arr[i],arr[j],arr[k]};
//                     // sorting
//                     sort(temp.begin(),temp.end());
//                     st.insert(temp);
//                 }
//             }
//         }
//     }
//     for(auto it:st){
//         ans.push_back(it);
//     }
//     // vector<vector<int>> ans(st.begin(), st.end());
//     return ans;
// }


// vector<vector<int>> triplet(int n,vector<int>arr){
//     vector<vector<int>> ans;
//     set<vector<int>> st;         // for uniqueness
//     for(int i=0;i<n;i++){
//         set<int> hashset;
//         for(int j=i+1;j<n;j++){
//             // for(int k=j+1;k<n;k++){
//                 int third = -(arr[i] + arr[j]);
//                 if(hashset.find(third) != hashset.end()){
//                     vector<int> temp = {arr[i],arr[j],third};
//                     sort(temp.begin(),temp.end());
//                     st.insert(temp);
//                 }
//                 hashset.insert(arr[j]);   //j-th index will be inserted  
//             // }
//         }
//     }
//     for(auto it:st){
//         ans.push_back(it);
//     }
//     // vector<vector<int>> ans(st.begin(), st.end());
//     return ans;
// }


vector<vector<int>> triplet(int n,vector<int>arr){
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        if(i>0 && arr[i] == arr[i-1]) continue;
        int left = i+1, right = n-1;
        while(left < right){
            int sum = arr[i] + arr[left] + arr[right];
            if(sum == 0){
                vector<int> temp = {arr[i],arr[left],arr[right]};  // storing
                ans.push_back(temp);
                left++;
                right--;
                while(left < right && arr[left] == arr[left-1]) left++;
                while(left < right && arr[right] == arr[right+1]) right--;
            }
            else if(sum>0){
                right--;
            }
            else{
                left++;
            }
        }
    }
    return ans;
}

int main()
{
    // vector<int> arr = { -1, 0, 1, 2, -1, -4};
    vector<int> arr = {-2,-2,-2,-1,-1,-1,0,0,0,2,2,2,2};
    int n = arr.size();
    vector<vector<int>> ans = triplet(n, arr);
    for (auto it : ans) {
        cout << "[";
        for (auto i : it) {
            cout << i << " ";
        }
        cout << "] ";
    }
    cout << "\n";
    return 0;
}