#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumPushes(string word) {
        
        unordered_map<char, int> mp;
        vector<int> freq;
        for(char c : word) mp[c]++;
        for(auto p : mp) freq.push_back(p.second);
        sort(freq.begin(), freq.end(), greater<int>());

        int count = 0;
        int ans = 0;

        for(int x : freq){
            int clicks = (count / 8) + 1;
            ans += x * clicks;
            count++;
        }
        return ans;
    }
};