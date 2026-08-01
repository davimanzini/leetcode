#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        
        int n = nums.size();
        if(n == 1) return 0;
        int i = 0;
        int j = 1;
        int ans = 0;

        while(i < n - 1){
            while(j < n){
                int curr = nums[i] + nums[j];
                if(curr < target) ans++;
                j++;
            }
            i++;
            j = i + 1;
        }
        return ans;
    }
};