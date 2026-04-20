#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long gcdSum(vector<int>& nums) {

        if(nums.size() == 1){
            return 0;
        }
        
        vector <int> prefixGcd(nums.size());
        prefixGcd[0] = nums[0];

        int maior = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > maior){
                maior = nums[i];
            }
            prefixGcd[i] = gcd(nums[i], maior);
        }

        sort(prefixGcd.begin(), prefixGcd.end());

        long long sum_gcd = 0;
        int i = 0;
        int j = nums.size() - 1;

        while(j > i){
            sum_gcd += gcd(prefixGcd[i], prefixGcd[j]);
            i++;
            j--;
        }
        return sum_gcd;
    }
};