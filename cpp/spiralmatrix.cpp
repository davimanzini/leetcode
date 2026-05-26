#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
            
            int n = matrix.size();
            int m =  matrix[0].size();
            vector<int> ans;

            int k = 0; //count spirals
            int i = 0;
            int j = 0;
            int count = 0;
            int num_spirals = ceil(n/2.0);
            int direcao = 1;
            int lim_esquerdo = 0;
            int lim_direito = m;
            int lim_superior = 0;
            int lim_inferior = n;

            while(k < num_spirals){
                while(i < lim_inferior && i >= lim_superior){
                    while((j < lim_direito && j >= lim_esquerdo) && (i < lim_inferior && i >= lim_superior)){

                        if(direcao == 1){
                            ans.push_back(matrix[i][j]);
                            cout << "coloquei " << matrix[i][j]<< "direcao " << direcao << endl;
                            j++;
                        }
                        else if(direcao == 2){
                            ans.push_back(matrix[i][j]);
                            cout << "coloquei " << matrix[i][j]<< "direcao " << direcao << endl;
                            i++;
                        }
                        else if(direcao == 3){
                            ans.push_back(matrix[i][j]);
                            cout << "coloquei " << matrix[i][j]<< "direcao " << direcao << endl;
                            j--;
                        }
                        else if(direcao == 4){
                            if(i == lim_superior && j == lim_esquerdo || (m == 1)) break; //voltou pro comeco
                            ans.push_back(matrix[i][j]);
                            cout << "coloquei " << matrix[i][j]<< "direcao " << direcao << endl;
                            i--;
                        }
                    }

                    if(direcao == 1){
                        direcao = 2;
                        i++;
                        j--;
                    } 
                    else if(direcao == 2){
                        if(lim_superior < lim_inferior - 1){
                            direcao = 3;
                            i--;
                            j--;
                        }
                        else break;
                    } 
                    else if(direcao == 3){
                        if(lim_esquerdo < lim_direito - 1){
                            direcao = 4;
                            i--;
                            j++;                            
                        }
                        else break;
                    } 
                    else break; //saiu da 4 etapa, encerrou;
                }

                direcao = 1;
            
                lim_esquerdo += 1;
                lim_direito -= 1;
                lim_superior += 1;
                lim_inferior -= 1;

                i = lim_superior;
                j = lim_esquerdo;

                k++;
            }
            return ans;
        }
};

int main() {

    vector<vector<int>> matrix = {
        {7},
        {9},
        {6}
    };

    Solution s;

    vector<int> ans = s.spiralOrder(matrix);
    
    cout << endl;
}