#include <iostream>
using namespace std;

class Solution {
public:
    int maximumJumps(vector<int>& nums, int target) {
        
        int n = nums.size();
        vector<int> max_jumps(n, -1);
        max_jumps[0] = 0;

        int i = 0;
        int j = 1;
        while(i < n){
            while(j < n){
                int curr_jumps = max_jumps[i];
                if(max_jumps[i] != - 1){
                    if(abs(nums[j] - nums[i]) <= target){
                        if(max_jumps[j] < curr_jumps + 1){
                            max_jumps[j] = curr_jumps + 1;
                        }
                    }     
                }
                
                j++;
            }
            i++;
            j = i + 1;
        }
        if(max_jumps[n - 1] == -1){
            return -1;
        }
        else{
            return max_jumps[n - 1];
        }
    }
};