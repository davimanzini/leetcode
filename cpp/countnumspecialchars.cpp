#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSpecialChars(string word) {
        
        unordered_map<char, array<int, 2>> seen;
        int n = word.length();
        int count = 0;

        for(int i = 0; i < n; i++){
            if(islower(word[i])){
                seen[word[i]][0] = 1;
            }
            else{
                seen[tolower(word[i])][1] = 1;
            }
        }

        for(auto p : seen){
            if(p.second[0] == 1 && p.second[1] == 1) count++;
        }
        return count;
    }
};