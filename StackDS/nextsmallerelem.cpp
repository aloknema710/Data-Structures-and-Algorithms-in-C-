#include <bits/stdc++.h>
using namespace std;

vector<int> NSE(vector<int> &arr) {
    int n = arr.size();
    vector<int> ans(n);
    stack<int> st;

    for (int i = n - 1; i >= 0; i--) {
        // Pop all elements greater than or equal to arr[i]
        while (!st.empty() && st.top() >= arr[i]) {
            st.pop();
        }

        // If stack is empty, no smaller element to the right
        if (st.empty()) {
            ans[i] = -1;
        } else {
            ans[i] = st.top(); // Next smaller element
        }

        // Push current element to stack
        st.push(arr[i]);
    }

    return ans;
}

int main() {
    vector<int> arr = {2, 10, 12, 1, 11};
    vector<int> ans = NSE(arr);

    for (int val : ans) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// vector<int> NSE(vector<int> & arr){
//     vector<int> ans(arr.size());
//     stack<int> st;
//     for (int i = arr.size()-1; i >= 0; i--){
//             while(!st.empty() && arr[i] <= st.top()) st.pop();
//             if(st.empty()) ans[i] = -1;
//             else ans[i] = st.top();
//         st.push(arr[i]);
//     }
//     return ans;
// }

// int main(){
//      vector<int> arr = {2,10,12,1,11};
//     vector<int> ans = NSE(arr);
//     for(int i=0;i<ans.size();i++){
//         cout << ans[i] << " ";
//     }
// }