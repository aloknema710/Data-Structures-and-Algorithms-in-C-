#include<bits/stdc++.h>
using namespace std;

int func1(vector<int> arr, int k){
    int Xor = 0;
    for (int i = 0; i < k; i++){
        Xor = Xor ^ arr[i];
        Xor = Xor ^ (i+1);
    }
    int Bitno = 0;
    while(1){
        
    }
}

int main(){
    vector<int> arr = {1,1,2,3,4,6};
    cout<<func1(arr,arr.size());
}