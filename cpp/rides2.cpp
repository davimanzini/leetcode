#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        
        int n = landDuration.size();
        int m = waterDuration.size();
        int menorLand = INT_MAX;
        int menorTeste1 = INT_MAX;
        int menorWater = INT_MAX;
        int menorTeste2 = INT_MAX;

        for(int i = 0; i < n; i++){
            int curr = landStartTime[i] + landDuration[i];
            if(curr < menorLand) menorLand = curr;
        }
        
        for(int j = 0; j < m; j++){
            int curr = max(menorLand, waterStartTime[j]) + waterDuration[j];
            if(curr < menorTeste1) menorTeste1 = curr;
        }

        for(int i = 0; i < m; i++){
            int curr = waterStartTime[i] + waterDuration[i];
            if(curr < menorWater) menorWater = curr;
        }
        
        for(int j = 0; j < n; j++){
            int curr = max(menorWater, landStartTime[j]) + landDuration[j];
            if(curr < menorTeste2) menorTeste2 = curr;
        }

        return min(menorTeste1, menorTeste2);

    }
};