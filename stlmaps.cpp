#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> mpp;
//  map<int, pair<int, int>> mpp;
//  map<pair<int, int>, int> mpp;
    mpp[1] = 2;
    mpp[2] = 3;
    mpp.insert({3,1});
    mpp.insert({4,2}); // you can also use emplace
}