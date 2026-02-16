#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map <int, int> mapa; //primeiro int é chave, segundo é valor

        for(int i = 0; i < nums.size(); i++){

            int complemento = target - nums[i];
            auto it = mapa.find(complemento);

            if(it == mapa.end()){
                mapa[nums[i]] = i;
            }
            else{
                return {it->second, i};
            }
        }
        return {};
    }
};