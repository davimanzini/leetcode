#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        int size1 = word1.length();
        int size2 = word2.length();

        int i = 0;
        int j = 0;
        string ans;

        while(i < size1 || j < size2){
            if(i < size1){
                ans.push_back(word1[i]);
                i++;
            }

            if(j < size2){
                ans.push_back(word2[j]);
                j++;
            }
        }
        return ans;
    }
};

/*
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        int j = 0;
        int state = 1;
        int size1 = word1.length();
        int size2 = word2.length();

        string ans;

        while(i < size1 || j < size2){

            if(state == 1){
                ans.push_back(word1[i]);
                i++;
                if(j != size2) state = 2;
            }
            else{
                ans.push_back(word2[j]);
                j++;
                if(i != size1) state = 1;
            }
        }
        return ans;
    }
};
*/