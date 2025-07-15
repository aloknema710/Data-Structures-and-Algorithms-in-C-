#include<bits/stdc++.h>
using namespace std;

// set<int> findmajorityelembettersol(int arr[],int n){
//     set<int> ls;
//     for(int i = 0;i < n;i++){
//         if(ls.size() == 0 || *ls.begin() != arr[i]){     // imp very cause if 1 is alredy present in list 
//             int cnt = 0;                                     & repeated twice no need to recount it.                   
//             for(int j = 0;j < n;j++){
//                 if(arr[j] == arr[i]) cnt++;
//             }
//             if(cnt>(n/3)) ls.insert(arr[i]);
//         }
//         if(ls.size() == 2) break;
//     }
//     return ls;
// }


// set<int> findmajorityelembettersol(int arr[],int n){
//     map<int, int> mpp;
//     set<int> res;
//     for(int i=0;i<n;i++){
//         mpp[arr[i]]++;
//     }
//     for(auto it:mpp){
//         if(it.second>n/3){
//             res.insert(it.first); // it.first and it.second are resemblence of key and value in hashmaps
//         }
//     }
//     return res;
// }

/*  optimal sol@ will be derived from moore voting algo.. in which n/2 times elem.. appears
 WE'RE GOING TO APPLY SAME CANCELATION LOGIC but differently
 2 counts will be created for counting 2 major candidates
 */

vector<int> findmajorityelemoptimalsol(int arr[],int n){
    int count1 = 0, count2 = 0;
    int can1 = -1, can2 = -1;
    for(int i = 0;i < n;i++){
        if (count1 == 0  && arr[i] != can2){                         //&& because when iterations are performed
            count1 = 1;
            can1 = arr[i];                                           // at some point same element can be stored in both
        }
        else if (count2 == 0 && arr[i] != can1){                     //  can1 and can2 which could create ambiguity.
            count2 = 1;
            can2 = arr[i];
        }
        else if(can1 == arr[i]) count1++;
        else if(can2 == arr[i]) count2++;
        else{
            count1--; count2--;
        }
        
    }
    vector<int> ls;
    int cnt1 = 0, cnt2=0;
    for(int i = 0;i < n;i++){
        if(arr[i] == can1) cnt1++;
        if(arr[i] == can2) cnt2++;
    }
    if(cnt1 > n/3) ls.push_back(can1);
    if(cnt2 > n/3) ls.push_back(can2);
        
    return ls;
}

int main(){
    int arr[] = {1,1,2,1,3,3,2,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    // set<int> ans = findmajorityelemoptimalsol(arr, n);
    // for(auto it : ans){
    //     cout<<it<<" ";
    // }
    vector<int> ans = findmajorityelemoptimalsol(arr,n);
    for(auto it : ans){
        cout<<it<<" ";
        }
        return 0;
}