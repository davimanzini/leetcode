#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n){
    if(n == 1){
        return false;
    }
    if(n == 2){
        return true;
    }

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        
        int ans = 0;

        for(int i = left; i <= right; i++){
            int valor = i;
            int count = 0;
            while(valor > 0){
                if(valor & 1){
                    count++;
                }
                valor >>= 1;
            }
            if(is_prime(count)){
                ans++;
            }
        }
        return ans;
    }
};