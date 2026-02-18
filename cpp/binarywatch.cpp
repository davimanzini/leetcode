#include <bits/stdc++.h>
using namespace std;

int count_bits(int n){

    int count = 0;

    while(n > 0){
        if(n & 1){
            count++;
        }
        n = n >> 1;
    }
    return count;
}


class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
    
    if(turnedOn > 8){
        return {};
    }

    vector<string> ans;

    for(int h = 0; h <= 11; h++){
        for(int m = 0; m <= 59; m++){

            if(count_bits(h) + count_bits(m) == turnedOn){
                string horario = to_string(h) + ":";

                if(m < 10){
                    horario = horario + '0';
                }

                horario = horario + to_string(m);
                ans.push_back(horario);
            }
        }
    }
    return ans;
    }
};