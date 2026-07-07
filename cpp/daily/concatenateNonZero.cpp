#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long sumAndMultiply(int n) {
        
        long long x = 0;
        long long sum = 0;
        long long m = 1;

        while(n > 0){
            long long curr = n % 10;
            if(curr != 0){
                x += curr * m;
                m *= 10;
                sum += curr;
            }
            n /= 10;
        }

        return x * sum;
    }
};