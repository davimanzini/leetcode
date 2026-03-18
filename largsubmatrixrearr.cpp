#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        
        int linhas = matrix.size();
        int colunas = matrix[0].size();

        for(int i = 0; i < linhas; i++){
            for(int j = 0; j < colunas; j++){
                int curr = matrix[i][j];
                if(i != 0 && curr != 0){
                    matrix[i][j] += matrix[i - 1][j];
                }
            }
        }

        int maior = 0;
        for(int i = 0; i < linhas; i++){
            int curr_size = 0;
            vector<int> temp = matrix[i];
            sort(temp.begin(), temp.end(), greater<int>());
            for(int j = 0; j < colunas; j++){
                curr_size = (j + 1) * temp[j]; //repertorio
                if(curr_size > maior){
                    maior = curr_size;
                }
            }
        }
        return maior;
    }
};