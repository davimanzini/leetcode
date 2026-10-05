#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        
        int linhas = matrix.size();
        int colunas = matrix[0].size();

        vector<int> ans(linhas);

        for(int i = 0; i < linhas; ++i){
            for(int j = 0; j < colunas; ++j){
                int curr = matrix[i][j];
                if(curr == 1){
                    ans[i]++;
                }
            }
        }

        return ans;
    }
};