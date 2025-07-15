#include<bits/stdc++.h>
using namespace std;
int func(int mid,int n,int k){        // also known as pow function.
    long long ans = 1;
    // while(n>0){
    //     if(n%2 == 1) {
    //         ans = ans*mid;
    //         n=n-1;
    //     }
    //     else{
    //         ans = mid*mid;
    //         n /= 2;
    //     }
    // }
    // return ans;
    for (int i = 1; i <= n; i++){
        ans = ans*mid;
        if(ans>k) return 2;
    }
    if(ans == k) return 1;
    return 0;
}
int nthroot(int n,int k){
    int low = 1, high = k;
    // while(low <= high){
    //     int mid = (low + high) / 2;
    //     if (func(mid,n,k) == k){
    //         return mid;
    //     }
    //     else if(func(mid,n,k) < k){             // you can also use pow(mid,n);
    //         low = mid + 1;
    //         }
    //     else{
    //         high = mid - 1;
    //     }
    // }
    while(low <= high){
        int mid = (low + high) / 2;
        int midN = func(mid,n,k);
        if(midN == 1) return mid;
        else if(midN == 0) low = mid + 1;
        else high = mid - 1;
        }
    return -1;       // by making only 2 cases you can return high
}
int main(){
    int n, k;
    cin >> n >> k;
    cout<<"The underroot "<<n<<" of "<<k<<"is:"<<nthroot(n,k);
}