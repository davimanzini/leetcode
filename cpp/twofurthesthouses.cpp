#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDistance(vector<int>& colors) {
        
        int i = 0;
        int max_dist = 0;

        while(i < colors.size() -1){
            int j = colors.size() - 1;
            while(j > i){
                if(colors[i] != colors[j]){
                    int curr_dist = abs(i - j);
                    if(curr_dist > max_dist){
                        max_dist = curr_dist;
                    }
                    break;
                }
                j--;
            }
            i++;
        }
        return max_dist;
    }
};