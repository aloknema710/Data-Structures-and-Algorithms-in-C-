#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyPrice = prices[0];
        int profit = 0;

        for (int i = 1; i < prices.size(); i++) {
            if (buyPrice > prices[i]) {                  // for small value than buyPrice encountered in array will be new buyPrice
                buyPrice = prices[i];
            }

            profit = max(profit, prices[i] - buyPrice);
        }

        return profit;        
    }

    int maxProfit2(vector<int>& prices) {
        int profit = 0;
        for(int i = 1;i < prices.size(); i++){
            if(prices[i] > prices[i - 1]){
                profit = profit + (prices[i] - prices[i-1]);
            }
        }
        return profit;
    }
};