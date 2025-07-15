#include<bits/stdc++.h>
using namespace std;

void leftrotate(int a[],int n,int d){
    reverse(a,a+n);
    reverse(a,a+d);                    //   v.imp writing like this saves your work
    reverse(a+d,a+n);                  //   of writing full reverse func..    
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int d;
    cin >> d;
    d=d%n;
    leftrotate(a,n,d);
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
        }
    return 0;
}
/*
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == 0) return;
        k = k % n;
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};
*/