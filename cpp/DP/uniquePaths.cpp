#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int uniquePaths(int m, int n) {
        
        vector<vector<int>> mat(m, vector<int>(n, 0));

        for(int i = 0; i < m; ++i){
            for(int j = 0; j < n; ++j){
                if(i == 0 || j == 0) mat[i][j] = 1;
                else mat[i][j] = mat[i][j - 1] + mat[i - 1][j];
            }
        }
        return mat[m - 1][n - 1];
    }
};