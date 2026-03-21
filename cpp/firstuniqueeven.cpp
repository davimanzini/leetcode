#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        
        unordered_map <int, int> mp;
        for(int x : nums){
            mp[x]++;
        }

        for(int y : nums){
            if((y % 2 == 0) && mp[y] == 1){
                return y;
            }
        }
        return -1;
    }
};