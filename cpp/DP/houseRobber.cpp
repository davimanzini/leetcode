#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
      
        int n = nums.size();
        if(n == 1) return nums[0];

        int currMax = nums[0];
        int prevMax = 0;
        int prevRobbed = 0;

        for(int i = 1; i < n; i++){
            if(i == prevRobbed + 1){
                int robCurr = prevMax + nums[i];
                if(robCurr > currMax){
                    prevMax = currMax;
                    currMax = robCurr;
                    prevRobbed = i;
                }
            }
            else{
                prevMax = currMax;
                currMax += nums[i];
                prevRobbed = i;
            }
        }
        return currMax;
    }
};