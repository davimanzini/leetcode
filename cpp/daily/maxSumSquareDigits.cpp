#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        
        if(sum > 9 * num) return "";
        string ans = "";

        for(int i = 0; i < num; ++i){
            int curr = min(9, sum);
            ans += to_string(curr);
            sum -= curr;
        }
        return ans;
    }
};