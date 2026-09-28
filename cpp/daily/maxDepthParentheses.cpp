#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        int maxSum = 0;
        int currSum = 0;
        for(char c : s){
            if(c == '('){
                currSum++;
                if(currSum > maxSum) maxSum = currSum;
            }
            else if(c == ')') currSum--;
        }

        return maxSum;
    }
};
