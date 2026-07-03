#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> ans;

        for(int i = 0; i < numRows; ++i){
            vector<int> aux(i + 1);
            int currSize = i + 1;
            for(int j = 0; j < currSize; ++j){
                if(j == 0 || j == currSize - 1) aux[j] = 1;

                else aux[j] = ans[i - 1][j - 1] + ans[i - 1][j];
            }
            ans.push_back(aux);
        }

        return ans;
    }
};