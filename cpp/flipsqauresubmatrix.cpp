#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        
        int tam_swap = k - 1;

        for(int i = x; i < x + (k / 2); i++){
            for(int j = y; j < y + k; j++){
                int aux = grid[i][j];
                grid[i][j] = grid[i + tam_swap][j];
                grid[i + tam_swap][j] = aux;
            }
            tam_swap -= 2;
        }

        return grid;
    }
};