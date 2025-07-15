#include<bits/stdc++.h>
using namespace std;
void movezero(int arr[],int n){
    int j= -1;
    for (int i = 0; i < n; i++){
        if (arr[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1) return ;
    for (int i = j+1; i < n; i++){
        if (arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
int main(){
    int arr[] = {0, 1, 2, 0, 3,};
    int n = sizeof(arr)/sizeof(arr[0]);
    movezero(arr,n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
        }
        return 0;
}

//simplest sol@
/*
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
*/