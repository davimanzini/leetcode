#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countCommas(int n) {
        
        int aux = n;
        int num_digs = 0;

        while(aux > 0){
            num_digs++;
            aux /= 10;
        }

        if(num_digs < 4){
            return 0;
        }

        return 1 + (n - 1000);
    }
};