// same problem but on circular array
#include<bits/stdc++.h>
using namespace std;

//brute
// vector<int> NGE2(vector<int>& arr){
//     vector<int> ans(arr.size());
    
//     for (int i = 0; i < arr.size(); i++){
//         for (int j = i + 1; j < arr.size() + i -1; j++){
//             int indx = j % arr.size();
//             if(arr[indx] > arr[i]){
//                 ans[i] = arr[indx];
//                 break;
//             }
//         }
//     }
//     return ans;
// }

vector<int> NGE2(vector<int>& arr){
    vector<int> ans(arr.size());
    stack<int> st;
    for (int i = 2*arr.size() - 1; i >= 0; i--){
        int indx = i % arr.size();
            while(!st.empty() && st.top() <= arr[indx]) st.pop();  // pop until stack is empty or top of stack is greater than current element
            if(st.empty()) ans[indx] = -1;          // when stack is empty, no greater element to right
            else ans[indx] = st.top();         // top of stack is the next greater element to right
            st.push(arr[indx]);
    }
    return ans;
}

int main(){
    vector<int> arr = {2,10,12,1,11};
    vector<int> ans = NGE2(arr);
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
}