#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
     
        if(mat == target){
            return true;
        }

        int size = mat.size();

        int k = 0;

        while(k < 4){

            vector<vector<int>> aux = mat;

            for(int i = 0; i < mat.size(); i++){
                for(int j = 0; j < mat.size(); j++){
                    aux[j][size -1 - i] = mat[i][j];
                }
            }

            if(aux == target){
                return true;
            }
            mat = aux;
            k++;
        }
        return false;
    }
};