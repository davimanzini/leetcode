#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        
        int n = landStartTime.size();
        int m = waterStartTime.size();
        int minimo = 1000000;

        for(int i = 0; i < n; i++){

            for(int j = 0; j < m; j++){
                int somaPrimeiro = 0;
                if(landStartTime[i] <= waterStartTime[j]){
                    somaPrimeiro = landStartTime[i] + landDuration[i];
                    if(somaPrimeiro >= waterStartTime[j]){
                        somaPrimeiro += waterDuration[j];
                    }
                    else{
                        int diff = waterStartTime[j] - somaPrimeiro;
                        somaPrimeiro += diff + waterDuration[j];
                    }
                }
                else{
                    somaPrimeiro = waterStartTime[j] + waterDuration[j];
                    if(somaPrimeiro >= landStartTime[i]){
                        somaPrimeiro += landDuration[i];
                    }
                    else{
                        int diff = landStartTime[i] - somaPrimeiro;
                        somaPrimeiro += diff + landDuration[i];
                    }
                }
                if(somaPrimeiro < minimo) minimo = somaPrimeiro;
            }
        }
        return minimo;
    }
};