#include<bits/stdc++.h>
using namespace std;

// parametrized recursion and functional recursion
// 1.

void fn1(int n, int i){
    if(n<0) {
        cout<<i;
        return;
    }
    fn1(n-1, i+n);
}

// 2.
int fn2(int n){
    if(n==1){
        return 1;
    }
    return n + fn2(n-1);
}

int main(){
    int n;
    cin>>n;
    fn1(n,0);
    cout<<'\n';
    cout<<fn2(n);
}