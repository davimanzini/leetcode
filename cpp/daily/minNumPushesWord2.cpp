#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumPushes(string word) {
        
        vector<int> freq(26, 0);
        for(char c : word) freq[c - 'a']++;
        sort(freq.begin(), freq.end(), greater<int>());

        int ans = 0;
        int count = 0;
        for(int x : freq){
            if(x == 0) break;
            int clicks = (count / 8) + 1;
            ans += clicks * x;
            count++;
        }
        return ans;
    }
};