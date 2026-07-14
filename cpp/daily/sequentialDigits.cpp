#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        
        string total = "123456789";
        int n = total.length();
        string curr = total.substr(0, 2);
        int currSize = 2;
        int next = 2;
        vector<int> ans;

        for(int i = 0; i < n; ++i){
            string prev = curr;
            int its = n - currSize + 1;

            for(int j = 0; j < its; ++j){
                int aux = stoi(curr);
                if(aux >= low && aux <= high){
                    ans.push_back(aux);
                }
                if(j != its - 1){
                    curr.erase(0, 1);
                    curr += total[next];
                    next++;
                }
            }

            if(currSize == 9){
                break;
            }

            curr = prev;
            next = currSize;
            currSize++;
            curr += total[next];
            next++;
        }
        return ans;
    }
};