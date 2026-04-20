#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minCost(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> aux1 = nums1;
        vector<int> aux2 = nums2;

        sort(aux1.begin(), aux1.end());
        sort(aux2.begin(), aux2.end());

        if(aux1 == aux2){
            return 0;
        }
        else{
            unordered_map<int, int> mp1;
            unordered_map<int, int> mp2;

            for(int x :nums1){
                mp1[x]++;
            }
            for(int y : nums2){
                mp2[y]++;
            }

            for(int i = 0; i < nums1.size(); i++){
                if(nums1[i] != nums2[i]){
                    
                }
            }
        }
    }
};