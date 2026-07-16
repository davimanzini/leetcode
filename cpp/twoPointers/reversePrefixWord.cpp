#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reversePrefix(string word, char ch) {
        
        int n = word.length();
        int i = 0;
        int j = 0;

        bool found = false;
        while(j < n){
            if(word[j] == ch){
                found = true;
                break;
            }
            j++;
        }
        if(found && j != 0){
            while(i < j){
                swap(word[i], word[j]);
                i++;
                j--;
            }
            return word;
        }
        else return word;
    }
};