#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    void backtrack(vector<vector<int>> &perms, vector<int> &nums,
        
        vector<int> &curr, vector<bool> &uses){

        int n = nums.size();

        if(curr.size() == n){ //tamanho de retorno
                perms.push_back(curr);
                return;
        }


        for(int i = 0; i < n; i++){
            if(uses[i] == true){
                continue;
            }
            curr.push_back(nums[i]);
            uses[i] = true;
            backtrack(perms, nums, curr, uses);
            uses[i] = false;
            curr.pop_back();
        }
        return;
    }


    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> perms;
        vector<int> curr;
        vector<bool> uses(nums.size(), false);

        backtrack(perms, nums, curr, uses);
        return perms;
    }
};
