#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    long long calc_commas(long long num, int digs){
                
        if(digs <= 6){
            return 1 + (num - 1000);
        }
        else if(digs <= 9){
            return ((1 + num - 1000000) * 2) + calc_commas(999999, 6);
        }
        else if(digs <= 12){
            return ((1 + num - 1000000000) * 3) + calc_commas(999999999, 9);
        }
        else if(digs <= 15){
            return ((1 + num - 1000000000000) * 4) + calc_commas(999999999999, 12);
        }
        else{ //16digs
            return (5 + calc_commas(999999999999999, 15)); 
        }
    }

    long long countCommas(long long n){
        
        long long aux = n;
        int num_digs = 0;

        while(aux > 0){
            num_digs++;
            aux /= 10;
        }

        if(num_digs < 4){
            return 0;
        }

        return calc_commas(n, num_digs);
        
    }
};