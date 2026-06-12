#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        int bestBuyDay = 0;
        int bestProfit = 0;

        if(n == 1) return 0;

        if(prices[1] - prices[0] >= 0){
            bestProfit = prices[1] - prices[0];
        }
        else{
            bestBuyDay = 1;
        }
        
        for(int i = 2; i < n; i++){
            if(prices[i] - prices[bestBuyDay] > bestProfit){
                bestProfit = prices[i] - prices[bestBuyDay];
            }
            if(prices[i] < prices[bestBuyDay]) bestBuyDay = i;
        }
        return bestProfit;
    }
};