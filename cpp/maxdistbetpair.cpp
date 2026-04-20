#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
       
        int max_dist = 0;        

        int i = 0;
        int j = 0;

        while(i < nums1.size() && j < nums2.size()){
            if(nums1[i] <= nums2[j]){
                int curr_dist = j - i;
                if(curr_dist > max_dist){
                    max_dist = curr_dist;
                }
                j++;
            }
            else{
                i++;
            }
        }
        return max_dist;
    }
};