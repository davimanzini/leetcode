#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countBinarySubstrings(string s) {
        
        if(s.length() == 1){
            return false;
        }

        int count_zero = 0;
        int count_um = 0;
        int ans = 0;

        int i = 0;

        while(i < s.length() - 1){

            int j = i + 1;
            bool diferente = false;

            if(s[i] == '0'){
                count_zero++;
            }
            else{
                count_um++;
            }

            while(s[j] == s[i]){
                if(s[i] == '0'){
                    count_zero++;
                }
                else{
                    count_um++;
                }
                j++;
            }

            int quebra = j;

            while(j < s.length() && s[j] != s[i]){
                if(s[j] == '0'){
                    count_zero++;
                }
                else{
                    count_um++;
                }

                if(count_zero == count_um){
                    ans = ans + count_um;
                    break;
                }

                j++;
            }

            if(count_zero != count_um){
                diferente = true;
            }
            
            if(!diferente){
                i = quebra;
            }
            else{
                i++;
            }
            
            count_um = 0;
            count_zero = 0;
        }
        return ans;
    }
};