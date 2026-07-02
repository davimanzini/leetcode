#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
    

        int n = cost.size();

        if(n == 2) return min(cost[0], cost[1]);

        vector<int> minimos(n + 1, 0);

        minimos[0] = cost[0];
        minimos[1] = cost[1];

        for(int i = 2; i <= n; i++){
            if(i != n) minimos[i] = cost[i] + min(minimos[i - 1], minimos[i - 2]);

            else minimos[i] = min(minimos[i - 1], minimos[i - 2]);
        }
        return minimos[n];
    }
};