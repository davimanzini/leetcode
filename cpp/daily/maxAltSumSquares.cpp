#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        
        int n = nums.size();
        for(int k = 0; k < n; ++k){
            if(nums[k] < 0) nums[k] *= -1;
        }
        sort(nums.begin(), nums.end());

        long long max = 0;
        int i = 0;
        int j = n - 1;

        for(int k = 0; k < n; ++k){
            if(k % 2 == 0){
                max += nums[j] * nums[j];
                j--;
            }
            else{
                max -= nums[i] * nums[i];
                i++;
            }
        }
        return max;
    }
};