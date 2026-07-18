#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findGCD(vector<int>& nums) {
        
        auto maxIt = max_element(nums.begin(), nums.end());
        auto minIt = min_element(nums.begin(), nums.end());

        int max = *maxIt;
        int min = *minIt;

        return gcd(max, min);
    }
};