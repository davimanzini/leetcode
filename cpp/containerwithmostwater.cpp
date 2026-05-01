#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {

        int max_area = 0;
        int n = height.size();
        
        int i = 0;
        int j = n - 1;

        while(i < j){
            int curr_area = min(height[i], height[j]) * (j - i);
            if(curr_area > max_area){
                max_area = curr_area;
            }
            if(height[i] <= height[j]){
                i++;
            }
            j--;
        }
        return max_area;
    }
};