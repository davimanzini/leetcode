#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int mirrorFrequency(string s) {
            
            string mirrors;
            unordered_map<char, int> mp;

            for(int i = 0; i < s.length(); i++){
                if(mp.find(s[i]) == mp.end()){
                    if(isalpha(s[i])){
                        int offset = s[i] - 'a';
                        int mirror_num = 25 - offset;
                        char mirror = 'a' + mirror_num;
                        mirrors.push_back(mirror);
                    }
                    else if(isdigit(s[i])){
                        int offset = s[i] - '0';
                        int mirror_num = 9 - offset;
                        char mirror = '0' + mirror_num;
                        mirrors.push_back(mirror);
                    }
                    mp[s[i]]++;
                }
            }

            int final_sum = 0;
            for(int i = 0; i < s.length(); i++){
                int abs_f_diff = abs(mp[s[i]] - mp[mirrors[i]]);
                final_sum += abs_f_diff;
            }
            return final_sum;
        }
    };