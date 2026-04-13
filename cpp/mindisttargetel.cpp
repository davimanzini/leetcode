#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int min = 100000;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == target){
                int curr = abs(i - start);
                if(curr < min){
                    min = curr;
                }
            }
        }
        return min;
    }
};