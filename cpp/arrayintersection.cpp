#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> ans;
        unordered_map<int, int> mp;

        for(int x : nums1){
            mp[x]++;
        }
        for(int y : nums2){
            if(mp[y] > 0){
                ans.push_back(y);
                mp[y] = -1;
            }
        }
        return ans;
    }
};