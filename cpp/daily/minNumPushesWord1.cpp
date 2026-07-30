#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimumPushes(string word) {
        
        int ans = 0;
        int tam = word.length();
        if(tam <= 8) return tam;

        int count = 1;
        while(tam >= 8){
            ans += 8 * count;
            tam -= 8;
            count ++;
        }
        ans += count * tam;
        return ans;
        
    }
};