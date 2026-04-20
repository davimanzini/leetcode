#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map<int, int> mp;

        for(int x : nums){
            mp[x]++;
        }

        for(auto &[key, value] : mp){
            if(value == 1){
                return value;
            }
        }
    }
};