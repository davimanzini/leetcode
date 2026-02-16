#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_map <int, int> mapa;

        for(int i = 0; i < nums.size(); i++){

            if(mapa[nums[i]] == 1){
                return true;
            }
            else{
                mapa[nums[i]] = 1;
            }
        }

        return false;
    }
};