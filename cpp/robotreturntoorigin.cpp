#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool judgeCircle(string moves) {
        
        int vertical = 0;
        int horizontal = 0;

        for(int i = 0; i < moves.length(); i++){
            if(moves[i] == 'U'){
                vertical++;
            }
            if(moves[i] == 'D'){
                vertical--;
            }
            if(moves[i] == 'R'){
                horizontal++;
            }
            if(moves[i] == 'L'){
                horizontal--;
            }
        }
        if(vertical == 0 || horizontal == 0){
            return true;
        }
    }
};