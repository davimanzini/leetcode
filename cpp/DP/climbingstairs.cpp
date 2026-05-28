#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    
        int recursao(int n, vector<int> &local){
    
            if(n == 1){
                local[n] = 1;
                return 1;
            }
            if(n == 2){
                local[n] = 2;
                return 2;
            }
            if(local[n] == 0){
                local[n] = recursao(n - 1, local) + recursao(n - 2, local);
                return local[n];
            }
            return local[n];
            
        }
    
        int climbStairs(int n) {
            
            vector<int> local(n + 1, 0);
            return recursao(n, local);
        }
    };