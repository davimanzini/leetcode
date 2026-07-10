#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void backtrack(int n, vector<int> &nums, vector<int> &curr, vector<vector<int>> &ans, vector<int> &seen){

        if(curr.size() == n){
            for(int i = 0; i < ans.size(); i++){
                if(ans[i] == curr) return;
            }
            ans.push_back(curr);
            return;
        }

        for(int i = 0; i < n; i++){
            if(seen[i] != -1){
                curr.push_back(nums[i]);
                seen[i] = -1;
                backtrack(n, nums, curr, ans, seen);
                seen[i] = 0;
                curr.pop_back();
            }
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        
        int n = nums.size();
        vector<vector<int>> ans;
        vector<int> curr;
        vector<int> seen(n, 0);

        backtrack(n, nums, curr, ans, seen);

        return ans;
    }
};