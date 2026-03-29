#include <iostream>
using namespace std;

class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        
        if(s1 == s2){
            return true;
        }
        string aux = s1;

        swap(aux[1], aux[3]);
        if(aux == s2){
            return true;
        }

        for(int i = 0; i < 2; i++){
            swap(s1[i], s1[i + 2]);
            if(s1 == s2){
                return true;
            }
        }
        return false;
    }
};