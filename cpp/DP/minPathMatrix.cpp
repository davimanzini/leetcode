#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();

        //anotar isso no obsidian
        vector<vector<int>> aux(n, vector<int>(m, 0));
        
        for(int i = 0; i < n; ++i){
            for(int j = 0; j < m; ++j){
                if(i == 0){
                    if(j == 0){
                        aux[i][j] = grid[i][j];
                    }
                    else{
                        aux[i][j] = grid[i][j] + aux[i][j - 1];
                    }
                }
                else if(j == 0){
                    aux[i][j] = grid[i][j] + aux[i - 1][j];
                }
                else{
                    aux[i][j] = grid[i][j] + min(aux[i - 1][j], aux[i][j - 1]);
                }
            }
        }
        return aux[n - 1][m - 1];
    }
};