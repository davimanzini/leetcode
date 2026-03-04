#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    char findKthBit(int n, int k) {
        
        string s = "0";

        int i = 1;

        while(i < n){

            string aux = s;

            s += '1';

            for(int i = 0; i < aux.length(); i++){
                if(aux[i] == '0'){
                    aux[i] = '1';
                }
                else{
                    aux[i] = '0';
                }
            }

            reverse(aux.begin(), aux.end());
            s += aux;
            i++;
        }

        return s[k - 1];
    }
};