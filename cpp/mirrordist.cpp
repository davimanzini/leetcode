#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mirrorDistance(int n) {
        
        int original = n;
        int reversed = 0;

        while(n > 0){
            int curr = n % 10;
            reversed = reversed * 10 + curr;
            n /= 10;
        }

        return original - reversed;
    }
};