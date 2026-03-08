#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        
        unordered_map <int, int> freq;
        int tamanho = nums.size();
        for(string s : nums){
            int count = 0;

            for(char c : s){
                if(c == '1'){
                    count++;
                }
            }
            freq[count]++;
        }
        int num_res;
        for(int i = 0; i <= tamanho; i++){
            if(freq.find(i) == freq.end()){
                num_res = i;
                break;
            }
        }
        string ans;
        for(int i = 0; i < num_res; i++){
            ans += '1';
        }
        while(ans.length() < tamanho){
            ans += '0';
        }
        return ans;
    }
};