#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void backtrack(vector<vector<int>> &ans, vector<int> &nums,
    vector<int> &curr, int start){

        ans.push_back(curr);

        for(int i = start; i < nums.size(); i++){
            curr.push_back(nums[i]);
            start = i + 1;
            backtrack(ans, nums, curr, start);
            curr.pop_back();
            start--;
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<vector<int>> ans;
        vector<int> curr;
        int start = 0;

        backtrack(ans, nums, curr, start);

        return ans;
    }
};