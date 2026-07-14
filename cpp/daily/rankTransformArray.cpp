#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        vector<int> aux = arr;
        sort(aux.begin(),aux.end());
        int n = arr.size();
        
        unordered_map<int, int> mp;
        int count = 1;

        for(int i = 0; i < n; ++i){
            int curr = aux[i];
            if(mp.find(curr) == mp.end()){
                mp[curr] = count;
                count++;
            }
        }
        for(int i = 0; i < n; ++i){
            int curr = arr[i];
            arr[i] = mp[curr];
        }
        return arr;
    }
};