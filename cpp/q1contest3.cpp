#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string trimTrailingVowels(string s) {
        
        unordered_set <char> vowels;

        vowels.insert('a');
        vowels.insert('e');
        vowels.insert('i');
        vowels.insert('o');
        vowels.insert('u');

        int i = s.length() - 1;
        while((i >= 0) && (vowels.count(s[i]))){
            s.erase(i, 1);
            i--;
        }

        return s;
    }
};