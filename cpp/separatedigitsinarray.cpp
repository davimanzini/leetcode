#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        
        vector<int> ans;
        int n = nums.size();
        for(int i = n - 1; i >= 0; i--){
            while(nums[i] > 0){
                int num = nums[i] % 10;
                ans.push_back(num);
                nums[i] /= 10;
            }
        }
        reverse(ans.begin(), ans.end());
    }
};