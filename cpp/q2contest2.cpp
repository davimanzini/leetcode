#include <bits/stdc++.h>
using namespace std;

int factorial(int n){

    if(n == 0){
        return 1;
    }

    return n * factorial(n-1);
}


class Solution {
public:
    bool isDigitorialPermutation(int n) {
        
        int fat = 0;

        int aux = n;
        while(aux > 0){
            int curr = aux % 10;
            fat = fat + factorial(curr);
            aux = aux / 10;
        }

        unordered_map <int, int> coef;

        while(fat > 0){
            int curr = fat % 10;
            coef[curr]++;
            fat = fat / 10;
        }

        int new_aux = n;

        while(new_aux > 0){
            int curr = new_aux % 10;

            if(coef.find(curr) != coef.end()){
                coef[curr]--;
            } 
            else{
                return false; // dígito não existe no mapa
            }

            new_aux /= 10;
        }

        for (auto &par : coef) {
            if (par.second != 0) {
                return false;
            }
        }

        return true;
    }
};