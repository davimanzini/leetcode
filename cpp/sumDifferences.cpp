#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        
        int n = nums.size();
        if(n == 1) return {0};

        vector<int> leftSum(n, 0);
        vector<int> rightSum(n, 0);
        vector<int> ans(n, 0);

        leftSum[0] = 0;
        rightSum[n - 1] = 0;
        int i = 1;
        int j = n - 2;

        while(i < n && j >= 0){
            leftSum[i] = nums[i - 1] + leftSum[i - 1];
            rightSum[j] = nums[j + 1] + rightSum[j + 1];
            i++;
            j--;
        }

        for(int k = 0; k < n; k++){
            ans[k] = abs(leftSum[k] - rightSum[k]);
        }

        return ans;
    }
};