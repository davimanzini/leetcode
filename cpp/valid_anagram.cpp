#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        unordered_map <char, int> mapa;

        for(char c : s){
            mapa[c]++; //inicializa com 0?
        }
        for(char c : t){
            auto it = mapa.find(c);
            if(it == mapa.end()){
                return false;
            }
            else{
                mapa[c]--;
            }
        }
        for(auto const& [chave, valor] : mapa){
            if(valor != 0){
                return false;
            }
        }
        return true;
    }
};