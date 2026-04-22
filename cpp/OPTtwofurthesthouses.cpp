#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDistance(vector<int>& colors) {
        
        int i = 0;
        int j = colors.size() - 1;
        int max_dist = 0;

        for(int k = 0; k < colors.size(); k++){
            if(colors[i] != colors[k]){
                int curr_dist = abs(k - i);
                if(curr_dist > max_dist){
                    max_dist = curr_dist;
                }
            }
            if(colors[j] != colors[k]){
                int curr_dist = abs(k - j);
                if(curr_dist > max_dist){
                    max_dist = curr_dist;
                }
            }
        }
        return max_dist;
    }
};