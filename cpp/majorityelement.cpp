#include <iostream>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map <int, int> map;

        for(int i = 0; i < nums.size(); i++){
            map[nums[i]]++;
        }

        int maior = 0;
        int ans;

        for(auto &par : map) {
            if(par.second > maior) {
                maior = par.second;
                ans = par.first;
            }
        }

        return maior;
    }
};