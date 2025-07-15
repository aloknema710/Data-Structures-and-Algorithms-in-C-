#include<bits/stdc++.h>
using namespace std;
int squareroot(int n){
    int low = 1, high = n, ans = 0;
    while(low <= high){
        int mid = (low + high) / 2;
        if(mid * mid == n){
            ans = mid;
            break;
        }
        else if(mid * mid < n){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return ans;       // by making only 2 cases you can return high
}
int main(){
    int n;
    cin >> n;
    cout<<squareroot(n);
}