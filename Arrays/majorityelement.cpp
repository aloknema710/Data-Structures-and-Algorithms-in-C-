#include<bits/stdc++.h>
using namespace std;
int majorityelement(vector<int> v){
    int count = 0;
    int candidate ;
    for (int i = 0; i < v.size(); i++){
        if (count == 0){
            count=1;
            candidate = v[i];
        }
        else if (candidate == v[i]){
            count++;
            }
        else{
            count--;
        }
    }
    int count1 = 0;
    for (int i = 0; i < v.size(); i++){
        if (v[i]==candidate){
            count1++;
        }
    }
    if (count1>(v.size()/2)){       // most imp. method
        return candidate;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for (int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    majorityelement(v);
    int result = majorityelement(v);
    cout << result << endl;
}