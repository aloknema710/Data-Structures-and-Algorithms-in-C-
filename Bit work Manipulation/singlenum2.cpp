#include<bits/stdc++.h>
using namespace std;

int func(vector<int> arr){
    int num = 0;
    for (int i = 0; i <= 31; i++){
        int cnt = 0;
        for (int j = 0; j < arr.size(); j++){
            if(arr[j] & (1 << i)) cnt++;
        }
        if(cnt%3==1) num = num | (1 << i);
    }
    
    return num;
}

int func2(vector<int> arr){
    sort(arr.begin(),arr.end());
    for (int i = 1; i < arr.size(); i+=3){
        if(arr[i]!=arr[i-1]) return arr[i-1];
    }
    return arr[arr.size()-1];
}

int main(){
    vector<int> arr = {5,5,5,2,7,7,7};
    // 1st solution map
    // 2nd solution - bit counter
    cout<<func(arr)<<endl;
    // 3rd solution -sorting
    cout<<func2(arr);
}