#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int totalSum = 0;
        int pivot = -1;
        int n = nums.size();
        for(int i = 0; i < n; ++i){
            totalSum += nums[i];
        }

        int sumL = 0;
        int sumR = totalSum;
        for(int i = 0; i < n; ++i){
            sumR -= nums[i];
            if(sumL == sumR){
                pivot = i;
                break;
            }
            sumL += nums[i];
        }
        return pivot;
    }
};