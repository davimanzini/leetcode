#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max = 0;
        int prev = 0;
        int n = gain.size();
        for(int i = 1; i < n; ++i){
            prev += gain[i];
            if(prev > max) max = prev;
        }
        return max;
    }
};