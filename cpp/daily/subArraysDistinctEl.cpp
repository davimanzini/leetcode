#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumCounts(vector<int>& nums) {
        
        int n = nums.size();
        int ans = 0;

        int i = 0;
        while(i < n){
            
            unordered_set<int> st;
            st.insert(nums[i]);
            int j = i;

            while(j < n){
                st.insert(nums[j]);
                int tam = st.size();
                ans += tam * tam;
                j++;
            }
            i++;
        }
        return ans;
    }
};