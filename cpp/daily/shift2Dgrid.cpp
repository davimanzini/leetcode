#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        
        int m = grid.size();
        int n = grid[0].size();
        int total = m * n;

        vector<int> vet(total, 0);

        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                int pos = i * n + j;
                int posFinal = (pos + k) % (total);
                vet[posFinal] = grid[i][j];
            }
        }

        int p = 0;
        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                grid[i][j] = vet[p++];
            }
        }

        return grid;
    }
};