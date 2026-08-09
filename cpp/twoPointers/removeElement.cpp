#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        if(n == 0) return 0;
        else if(n == 1){
            if(nums[0] != val) return 1;
            else return 0;
        }

        int i = 0;
        int j = n - 1;
        int count = 0;

        while(i < j){
            if(nums[i] == val && nums[j] == val) j--;
            else if(nums[i] == val){
                swap(nums[i], nums[j]);
                count++;
                i++;
                j--;
            }
            else if(nums[j] == val) j--;
            else{
                i++;
                count++;
            }
        }
        if(nums[i] != val) count++;
        return count;
    }
};