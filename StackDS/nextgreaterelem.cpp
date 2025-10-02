// monotonic stack: arranging elements in any order
// next greater element to right for every index, this is the summary of the problem
// these elems are stored in stack in decreasing order
// if the current element is greater than the top of the stack, pop the stack until the
// top of the stack is greater than the current element or the stack becomes empty
// if the stack becomes empty, then there is no greater element to the right, so store -1
// else the top of the stack is the next greater element to the right, so store it
// push the current element to the stack
// repeat the process for all elements from right to left
#include<bits/stdc++.h>
using namespace std;

vector<int> nGE(vector<int>& arr){
    vector<int> ans(arr.size());
    stack<int> st;
    for(int i = arr.size()-1; i >= 0; i--){
        
            while(!st.empty() && st.top() <= arr[i]) st.pop();
            if(st.empty()) ans[i] = -1;
            else ans[i] = st.top();
        
        st.push(arr[i]);    
    }
    return ans;
}

int main(){
    vector<int> arr = {4,5,2,10,8};
    vector<int> ans = nGE(arr);
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
}