#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        
        string ans;
        int m = words.size();

        for(int i = 0; i < m; i++){
            
            int currWeight = 0;

            for(int j = 0; j < words[i].length(); j++){

                int charNum = words[i][j] - 'a';
                currWeight += weights[charNum];
            }
            int finalLetterNum = currWeight % 26;
            ans.push_back(weights[finalLetterNum]);
        }
        return ans;
    }
};