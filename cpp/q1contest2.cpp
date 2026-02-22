#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        
        int scorep1 = 0;
        int scorep2 = 0;

        bool p1_active = true;
        bool p2_active = false;

        for(int i = 0; i < nums.size(); i++){

            if((nums[i] % 2 != 0)){
                bool aux = p1_active;
                p1_active = p2_active;
                p2_active = aux;
            }

            if((i + 1) % 6 == 0){
                bool aux = p1_active;
                p1_active = p2_active;
                p2_active = aux;
            }

            if(p1_active){
                scorep1 += nums[i];
            }
            else{
                scorep2 += nums[i];
            }
        }
        int diff = scorep1 - scorep2;
        return diff;
    }
};