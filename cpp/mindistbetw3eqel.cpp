#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        
        unordered_map<int, vector<int>> mp;

        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]].push_back(i);
        }

        int ans = 100000;

        for(auto &p : mp){
            if(p.second.size() < 3){
                continue;
            }
            int i = 0;
            int j = 1;
            int k = 2;
            while(k < p.second.size()){
                int curr = abs(p.second[i] - p.second[j]) +
                abs(p.second[j] - p.second[k]) +
                abs(p.second[k] - p.second[i]);
                if(curr < ans) ans = curr;
                i++;
                j++;
                k++;
            }
        }
        if(ans < 100000){
            return ans;
        }
        else return -1;
    }
};