// Given an array of numbers, you need to return the count of reverse pairs.
// Reverse Pairs are those pairs where i<j and arr[i]>2*arr[j].
#include<bits/stdc++.h>
using namespace std;

int team(vector<int> a, int n){
    
}

int main(){
    vector<int> a = {4, 1, 2, 3, 1};
    int n = 5;
    int cnt = team(a, n);
    cout << "The number of reverse pair is: "
         << cnt << endl;
    return 0;
}