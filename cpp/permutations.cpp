#include <iostream>
using namespace std;

class Solution {
public:

    void backtrack(vector<vector<int>> &perms, vector<int> nums, vector<int> &curr){

        int n = nums.size();

        if(curr.size() == n){ //tamanho de retorno
                perms.push_back(curr);
                return;
        }

        for(int x : nums){
            
            curr.push_back(x);
        }
    }


    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> perms;
        vector<int> curr;
        backtrack(perms, nums, curr);
        return perms;
    }
};