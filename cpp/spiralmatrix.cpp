#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
            
            int n = matrix.size();
            int m =  matrix[0].size();
            vector<int> ans;

            int i = 0;
            int j = 0;
            int count = 0;

            while(i < n && i >= 0){
                while((j < m && j >= 0) && (i < n && i >= 0)){
                    if(count < m){
                        ans.push_back(matrix[i][j]);
                        j++;
                    }
                    else if(count < m + n - 1){
                        ans.push_back(matrix[i][j]);
                        i++;
                    }
                    else if(count < (2 * m) + n - 2){
                        ans.push_back(matrix[i][j]);
                        j--;
                    }
                    else if(count < (2 * m) + (2 * n) - 4){
                        ans.push_back(matrix[i][j]);
                        i--;
                    }
                    else{
                        break;
                    }
                    count++;
                }
                //quebras de direcao
                if(count == m){
                    j--;
                    i++;
                }
                else if(count == n + m - 1){
                    i--;
                    j--;
                }
                else if(count == (2 * m) + n - 2){
                    j++;
                    i--;
                }
                else if(count  == (2 * m) + (2 * n) - 4){
                    break;
                }
            }
            return ans;
        }
    };