#include<bits/stdc++.h>
using namespace std;
// Return the maximum integer K(no.of banana ate in hour) such that Koko can eat all bananas within h hours

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
int minimumRateToEatBananas(vector<int> piles, int h) {
    //Find the maximum number:
    int maxi = findMax(piles);

    //Find the minimum value of k:
    for (int i = 1; i <= maxi; i++) {
        int reqTime = calculateTotalHours(piles, i);      // we are going to calculate requiredtime for each no. in respected piles.
        if (reqTime <= h) {
            return i;
        }
    }
    //dummy return statement
    return maxi;
}
int main(){
    vector<int> piles = {3,6,7,11};
    int h = 8;       // it is finishing time
    minimumRateToEatBananas(piles,h);
}