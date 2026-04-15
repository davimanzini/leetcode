#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        
        if(words[startIndex] == target){
            return 0;
        }

        int right = (startIndex + 1) % words.size();
        int left = (startIndex - 1 + words.size()) % words.size();
        int count_total = 0;

        while(count_total <= words.size()){
            count_total++;
            if(words[right] == target || words[left] == target){
                return count_total;
            }
            right = (right + 1) % words.size();
            left = (left - 1 + words.size()) % words.size();
        }
        return -1;
        
    }
};