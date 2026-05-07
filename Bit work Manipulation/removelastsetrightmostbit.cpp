#include<bits/stdc++.h>
using namespace std;

int func(int n){
    int ans = 0;
    ans = n & n-1;
    return ans;
}

int main(){
    cout<<func(12);   //1100 & 1011 = 1000
    cout<<func(6);    //0110 & 0101 = 0100
}