#include <iostream>
using namespace std;

class Solution {
public:
    bool checkStrings(string s1, string s2) {

        unordered_map<char, int> evens1; //daria para usar apenas vectors de 26 elementos
        //ja que as strings sao de letras minusculas apenas
        unordered_map<char, int> evens2;

        unordered_map<char, int> odds1;
        unordered_map<char, int> odds2;

        for(int i = 0; i < s1.length(); i++){
            if(i % 2 == 0){
                evens1[s1[i]]++;
                evens2[s2[i]]++;
            }
            else{
                odds1[s1[i]]++;
                odds2[s2[i]]++;
            }
        }

        if((evens1 == evens2) && (odds1 == odds2)){
            return true;
        }
        else{
            return false;
        }
    }
};