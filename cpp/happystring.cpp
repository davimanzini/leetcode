#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int count = 0;
        string ans = "";
    
        void dfs(string curr, int n, int k){
            if(curr.size() == n){
                count++;
                if(count == k)
                    ans = curr;
                return;
            }
    
            for(char c : {'a','b','c'}){
                if(curr.size() > 0 && curr.back() == c)
                    continue;
    
                dfs(curr + c, n, k);
            }
        }
    
        string getHappyString(int n, int k){
            dfs("", n, k);
            return ans;
        }
    };