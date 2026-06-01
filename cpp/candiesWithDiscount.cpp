#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumCost(vector<int>& cost) {
        
        int n = cost.size();
        if(n == 1) return cost[0];
        if(n == 2) return cost[0] + cost[1];

        sort(cost.begin(), cost.end());
        int i = n - 1;
        int gasto = 0;
        int count = 1;

        while(i >= 0){
            if((count % 3) != 0){
                gasto += cost[i];
            }
            i--;
            count++;
        }
        return gasto;
    }
};