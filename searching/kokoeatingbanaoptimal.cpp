#include<bits/stdc++.h>
using namespace std;

int findMax(vector<int> &piles) {
    int maxi = INT_MIN;
    //find the maximum:
    for (int i = 0; i < piles.size(); i++) {
        maxi = max(maxi, piles[i]);
    }
    return maxi;
}

int calculateTotalHours(vector<int> piles, int h){
    int totalH = 0;
    for (int i = 0; i < piles.size(); i++){
        totalH += ceil((double)(piles[i])/(double)(h));
    }
    return totalH;
}

int minimumRateToEatBananas(vector<int> &piles, int h){
    int low = 0, high = piles.size() - 1;
    int ans = -1;
    while (low <= high) {
        int mid = (high + low) / 2;
        int totalH = calculateTotalHours(piles, mid);
        if (totalH <= h) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return low;
}
int main(){
    vector<int> piles = {3,6,7,11};
    int h = 8;       // it is finishing time
    cout<<minimumRateToEatBananas(piles,h);
}