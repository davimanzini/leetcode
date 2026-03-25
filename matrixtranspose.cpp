#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int linhas_aux = matrix[0].size();
        int colunas_aux = matrix.size();

        vector<vector<int>> aux(linhas_aux, vector<int>(colunas_aux));

        for(int i = 0; i < linhas_aux; i++){
            for(int j = 0; j < colunas_aux; j++){
                aux[i][j] = matrix[j][i];
            }
        }

        return aux;
    }
};