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

            while(i < n){
                while(j < m && i < n){
                    if(count < n){
                        ans.push_back(matrix[i][j]);
                        j++;
                    }
                    else if(count < n + m - 1){
                        ans.push_back(matrix[i][j]);
                        i++;
                    }
                    else if(count < (2 * n) + m - 2){
                        ans.push_back(matrix[i][j]);
                        j--;
                    }
                    else{
                        break;
                    }
                    count ++;
                }
                //quebras de direcao
                if(count == n){
                    j--;
                    i++;
                }
                else if(count == n + m - 1){
                    i--;
                    j--;
                }
                else if(count == (2 * n) + m - 2){
                    j++;
                    i--;
                }
                
            }
            return ans;
        }
    };