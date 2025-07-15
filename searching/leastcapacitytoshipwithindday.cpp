#include<bits/stdc++.h>
using namespace std;

int findDays(vector<int> weights, int cap){
    int day = 1, load = 0;
    for(int j = 0; j < weights.size(); j++){
        if(load + weights[j] > cap){
            day = day +1;
            load = weights[j];
        }
        else{
        load += weights[j]; // loading weights on same day.
        }
    }
    return day;
}

int leastWeightCapacity(vector<int> weights, int d){
    // int capacity = 0;
     //Find the maximum and the summation:
     int maxi = *max_element(weights.begin(), weights.end());
     int sum = accumulate(weights.begin(), weights.end(), 0);
 
     for (int i = maxi; i <= sum; i++) {                  // i = maxi is necessary how because if ship is not able  
         if (findDays(weights, i) <= d) {                 // to carry max weight then no point of doing this.                 
            return i;                         // i is capacity.
         }
     }
     //dummy return statement:
     return -1;
}

int main(){
    vector<int> weights = {5, 4, 5, 2, 3, 4, 5, 6};
    int d = 5;
    int ans = leastWeightCapacity(weights, d);
    cout << "The minimum capacity should be: " << ans << "\n";
    return 0;
}