#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int binaryGap(int n) {
        
        int first = 0;
        int second = 0;
        int count = 1;
        int diff_final = 0;

        while(n > 0){
            
            if(n & 1){
                second = first;
                first = count;

                if((first != 0) && (second != 0)){
                    int diff_local = abs(second - first);
                    if(diff_local > diff_final){
                        diff_final = diff_local;
                    }
                }
            }
            n >>= 1;
            count++;
        }

        return diff_final;
    }
};